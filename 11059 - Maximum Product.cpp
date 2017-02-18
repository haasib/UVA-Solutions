#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ar[20];
int main()
    {
        int n,c=0;
        ll r,p;
        while(scanf("%d",&n)==1){
            c++;
            r=0;
            p=1;
            for(int i=0;i<n;i++)scanf("%d",&ar[i]);
            for(int i=0;i<n;i++){
                p=ar[i];
                r=max(r,p);
                for(int j=i+1;j<n;j++){
                    p*=ar[j];
                    r=max(r,p);
                }
            }
            printf("Case #%d: The maximum product is %lld.\n\n",c,max(r,(ll)0));
        }
        return 0;
    }
