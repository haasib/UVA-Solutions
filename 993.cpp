#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ar[1001];
int main()
    {
        int tc;
        scanf("%d",&tc);
        while(tc--){
            ll n;
            scanf("%lld",&n);
            if(n<10)
                printf("%d\n",n);
            else{
                int t=9,e=-1;
                while(t>1){
                    while(!(n%t)){
                        n/=t;
                        ar[++e]=t;
                    }
                    t--;
                }
                if(n==1){
                    sort(ar,ar+e+1);
                    for(int i=0;i<=e;i++)
                        printf("%d",ar[i]);
                    printf("\n");
                }
                else
                    printf("-1\n");
            }
        }
        return 0;
    }
