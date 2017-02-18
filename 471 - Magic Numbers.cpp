#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 9876543210
int ar[11];
bool F(ll n)
    {
        memset(ar,0,sizeof(ar));
        while(n!=0){
            int r=n%10;
            ar[r]++;
            if(ar[r]>1)return false;
            n/=10;
        }
        return true;
    }
int main()
    {
        int tc,c=0;
        ll n;
        scanf("%d",&tc);
        while(tc--){
            c++;
            scanf("%lld",&n);
            if(c>1)printf("\n");
            for(ll i=1;n*i<=mx;i++){
                if(F(i)){
                    if(F(n*i))printf("%lld / %lld = %lld\n",n*i,i,n);
                }
            }
        }
        return 0;
    }
