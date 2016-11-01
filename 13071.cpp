#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        int tc;
        scanf("%d",&tc);
        for(int p=1;p<=tc;p++){
            int a,b;
            scanf("%d %d",&a,&b);
            ll c=a+b;
            ll r=(c*(c+1))/2;
            r+=a+1;
            printf("%lld\n",r);
        }
        return 0;
    }
