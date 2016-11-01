#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int k;
        scanf("%d",&k);
        for(int p=1;p<=k;p++){
            int n;
            scanf("%d",&n);
            int a[n];
            for(int i=0;i<n;i++)
                scanf("%d",&a[i]);
            int c=0;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(a[i]>a[j]){
                        int t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                        c++;
                    }
                }
            }
            printf("Optimal train swapping takes %d swaps.\n",c);
        }
        return 0;
    }
