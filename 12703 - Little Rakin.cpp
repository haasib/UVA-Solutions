#include<bits/stdc++.h>
using namespace std;
#define mx 1001
#define pb push_back
#define ll long long
//vector<pair<ll,ll> >v[2];
ll ar[41][1005];
int mm=0;
void pf(int n,int in)
    {
        int e=0;
        while(n%2==0){
            n/=2;
            e++;
        }
        if(e>0){
            mm=max(mm,2);
            ar[in][2]=e;
        }
        for(int i=3;i*i<=n;i+=2){
            e=0;
            while(n%i==0){
                n/=i;
                e++;
            }
            if(e>0){
                ar[in][i]=e;
                mm=max(mm,i);
            }
        }
        if(n>1){
            ar[in][n]=1;
            mm=max(mm,n);
        }
    }
int main()
    {
        int tc,n;
        ll a,b;
        scanf("%d",&tc);
        while(tc--){
            memset(ar,0,sizeof(ar));
            scanf("%d %lld %lld",&n,&a,&b);
            mm=0;
            pf(a,0);
            pf(b,1);
            for(int i=2;i<=n;i++){
                ar[i][2]=ar[i-1][2]+ar[i-2][2];
                for(int j=3;j<=mm;j+=2)ar[i][j]=ar[i-1][j]+ar[i-2][j];
            }
            if(ar[n][2]!=0)printf("2 %lld\n",ar[n][2]);
            for(int i=3;i<=mm;i+=2){
                if(ar[n][i]!=0)printf("%d %lld\n",i,ar[n][i]);
            }
            printf("\n");
        }
        return 0;
    }
