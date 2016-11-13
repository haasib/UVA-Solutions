#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        int tc;
        scanf("%d",&tc);
        while(tc--){
            ll n;
            scanf("%lld",&n);
            ll r=(sqrt((8*n)+1)-1)/2;
            printf("%lld\n",r);
        }
        return 0;
    }
