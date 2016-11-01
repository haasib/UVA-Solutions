#include<bits/stdc++.h>
using namespace std;
int a[10001];
int main()
    {
        int n,m,k=0;
        while(scanf("%d",&n)!=EOF){
        k++;
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&m);
        sort(a,a+n);
        int c,d,e=INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]>m)
                    break;
                if(a[i]+a[j]==m){
                    if(max(a[i],a[j])-min(a[i],a[j])<e){
                        e=abs(a[i]-a[j]);
                        c=min(a[i],a[j]);
                        d=max(a[i],a[j]);
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n",c,d);
        printf("\n");
        }
        return 0;
    }
