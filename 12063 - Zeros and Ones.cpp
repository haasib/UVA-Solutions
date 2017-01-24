#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mem(nn,a) memset(nn,a,sizeof(nn))
ll dp[66][40][40][105];
ll ar[70];
int n,m,Z,O,t;
ll pwr()
    {
        ar[0]=1;
        for(int i=1;i<=64;i++)ar[i]=(ar[i-1]*2)%m;
    }
ll F(ll i,ll j,ll k,ll num)
    {
        if(j>Z || k>O)return 0;
        if(i>=n-1){
            //cout<<j<< " "<<k<<" "<<num<<endl;
            if(j==Z && k==O){
                if( (num+t)%m==0 )
                    return 1;
            }
            return 0;
        }
        if(dp[i][j][k][num]!=-1)return dp[i][j][k][num];
        ll p=0;
        p=F(i+1,j+1,k,num)+F(i+1,j,k+1,(num+ar[i])%m);
        return dp[i][j][k][num]=p;
    }
int main()
    {
        int tc,c=0;
        scanf("%d",&tc);
        while(tc--){
            c++;
            scanf("%d %d",&n,&m);
            printf("Case %d: ",c);
            if(n%2==0 && m!=0){
                O=n/2-1;
                Z=n/2;
                pwr();
                t=ar[n-1];
                mem(dp,-1);
                printf("%lld\n",F(0,0,0,0));
            }
            else printf("0\n");
        }
        return 0;
    }
