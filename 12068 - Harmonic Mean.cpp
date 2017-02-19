#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[12];
ll gcd(ll a,ll b)
    {
        if(a==0)return b;
        return gcd(b%a,a);
    }
int main()
    {
        int tc,n,c=0;
        ll mul,sum;
        scanf("%d",&tc);
        while(tc--){
            c++;
            mul=1;
            sum=0;
            scanf("%d",&n);
            for(int i=0;i<n;i++){
                scanf("%lld",&ar[i]);
                mul*=ar[i];
            }
            for(int i=0;i<n;i++){
                sum+=(mul/ar[i]);
            }
            mul*=n;
            ll t=gcd(mul,sum);
            printf("Case %d: %lld/%lld\n",c,mul/t,sum/t);
        }
        return 0;
    }
