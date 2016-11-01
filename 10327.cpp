#include<bits/stdc++.h>
using namespace std;
int a[1001];
int flip(int n)
    {
        int c=0;
            for(int i=0;i<n-1.;i++){
                for(int j=i+1;j<n;j++){
                    if(a[i]>a[j]){
                        c++;
                    }
                }
        }
        return c;
    }
int main()
    {
        int n;
        while(scanf("%d",&n)!=EOF){
            for(int i=0;i<n;i++)
                scanf("%d",&a[i]);
            printf("Minimum exchange operations : %d\n",flip(n));
        }
        return 0;
    }
