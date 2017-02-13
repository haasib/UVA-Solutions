#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        int tc,a;
        ll n,r;
        scanf("%d",&tc);
        while(tc--){
            scanf("%lld",&n);
            r=0;
            a=sqrt(n+.0001);
            for(ll i=1;i*i<=n;i++)r+=(n/i);
            r*=2;
            r-=a*a;
            printf("%lld\n",r);
        }
        return 0;
    }
