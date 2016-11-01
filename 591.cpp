#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n,k=0;
        while(scanf("%d",&n) && n){
            k++;
            int a[n],s=0;
            for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
                s+=a[i];
            }
            int c=0;
            int d=s/n;
            for(int i=0;i<n;i++){
                if(a[i]-d>0)
                    c+=a[i]-d;
            }
            printf("Set #%d\n",k);
            printf("The minimum number of moves is %d.\n\n",c);
        }
        return 0;
    }
