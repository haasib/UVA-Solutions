#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[10000001];
int b[10000001];
int c[10000001];
int main()
    {
        int tc;
        scanf("%d",&tc);
        for(int p=1;p<=tc;p++){
            int n,k,e=-1;
            scanf("%d %d",&n,&k);
            ll r =0;
            for(int i=0;i<n;i++)
                scanf("%d",&a[i]);
            for(int i=0;i<n;i++){
                scanf("%d",&b[i]);
                r+=b[i]-a[i];
                if(a[i]>b[i])c[++e]=a[i]-b[i];
            }
            sort(c,c+e+1);
            for(int i=e;i>=0;i--){
                if(k==0)
                    break;
                r+=c[i];
                k--;

            }
            printf("Case %d: ",p);
            if(r>0)
                printf("%lld\n",r);
            else
                printf("No Profit\n");
        }
        return 0;
    }
