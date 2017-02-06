#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[40005];
bool FF(ll n,ll m)
    {
        ll a=0,b=0,k=10;
        while(n/k>0){
            a=n%k;
            b=n/k;
            k*=10;
            if(!a || !b)continue;
            if(a+b==m)return true;
        }
        return false;
    }
void F()
    {
        ar[9]=ar[45]=ar[55]=1;
        for(ll i=91;i<=40000;i++){
            ll t=i*i;
            if(FF(t,i))ar[i]=1;
        }
    }
int main()
    {
        F();
        //ll n;
        //cin>>n;
        //cout<<FF(n)<<endl;
        //for(int i=0;i<100;i++)cout<<i<<" "<<ar[i]<<endl;
        int tc,c=0,a,b,p;
        scanf("%d",&tc);
        while(tc--){
            c++;
            p=0;
            scanf("%d %d",&a,&b);
            if(c>1)printf("\n");
            printf("case #%d\n",c);
            for(int i=a;i<=b;i++){
                if(ar[i]){
                    p++;
                    printf("%d\n",i);
                }
            }
            if(!p)printf("no kaprekar numbers\n");
        }
        return 0;
    }
