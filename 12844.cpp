#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        int tc;
        ll a,b,c,d,e;
        scanf("%d",&tc);
        int ar[10];
        for(int p=1;p<=tc;p++){
            ll sum=0;
            for(int i=0;i<10;i++){
                scanf("%d",&ar[i]);
                sum+=ar[i];
            }
            sort(ar,ar+10);
            sum/=4;
            c=sum-(ar[0]+ar[9]);
            a=ar[1]-c;
            b=ar[0]-a;
            e=ar[8]-c;
            d=ar[9]-e;
            printf("Case %d: %lld %lld %lld %lld %lld\n",p,a,b,c,d,e);
        }
        return 0;
    }
