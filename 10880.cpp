#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[10000];
int main()
    {
        int k;
        scanf("%d",&k);
        for(int p=1;p<=k;p++){
            ll c,r;
            scanf("%lld %lld",&c,&r);
            printf("Case #%d:",p);
            if(c==r)
                printf(" 0\n");
            else{
            ll b=(c-r);
            int e=-1;
            for(int i=1;i*i<=b;i++){
                if(b%i==0){
                    a[++e]=i;
                    if(b/i!=i)
                        a[++e] = b/i;
                }
            }
            sort(a,a+e+1);
            for(int i=0;i<=e;i++){
                if(a[i]>r){
                    printf(" %lld",a[i]);
                }
            }
            printf("\n");
        }
        }
        return 0;
    }
