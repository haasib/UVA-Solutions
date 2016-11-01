#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(ll n)
    {
        if(n>=101)return n-10;
        return f(f(n+11));
    }
int main()
    {
        ll n;
        while(scanf("%lld",&n) && n!=0){
            printf("f91(%lld) = %lld\n",n,f(n));
        }
        return 0;
    }
