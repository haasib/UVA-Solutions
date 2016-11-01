#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        int tc;
        scanf("%d",&tc);
        for(int p=1;p<=tc;p++){
            ll n;
            scanf("%lld",&n);
            ll r=(n*(n-1))/2;
            printf("Case %d: ",p);
            if(r%2==0)
                printf("%lld\n",r/2);
            else
                printf("%lld/2\n",r);
        }
        return 0;
    }
