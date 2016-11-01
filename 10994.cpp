#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll N(ll n)
    {
        return (n*(n+1))/2;
    }
ll sum(ll n)
    {
        if(n<=0)return 0;
        if(n<10)return N(n);
        return (((n/10)*45)+N(n%10)+sum(n/10));
    }
int main()
    {
        int p,q;
        while(scanf("%d %d",&p,&q)){
            if(p<0 && q<0)
                break;
            printf("%lld\n",sum(q)-sum(p-1));
        }
        return 0;
    }
