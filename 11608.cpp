#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n,k=0;
        while(scanf("%d",&n) && n>=0){
        k++;
        int a[13],b[13];
        a[0]=n;
        for(int i=1;i<=12;i++)
            scanf("%d",&a[i]);
        for(int i=1;i<=12;i++){
            scanf("%d",&b[i]);
        }
        printf("Case %d:\n",k);
        for(int i=1;i<=12;i++){
            if(a[i-1]>=b[i]){
                printf("No problem! :D\n");
                a[i]+=a[i-1];
                a[i]-=b[i];
            }
            else{
                printf("No problem. :(\n");
                a[i]+=a[i-1];
            }
        }
        }
        return 0;
    }
