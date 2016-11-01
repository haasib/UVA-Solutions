#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n,b,h,w;
        while(scanf("%d %d %d %d",&n,&b,&h,&w)!=EOF){
            int p,a,r=b+10,c=0;
            for(int i=0;i<h;i++){
                scanf("%d",&p);
                int k=0;
                for(int j=0;j<w;j++){
                    scanf("%d",&a);
                    k=max(k,a);
                }
                if(k>=n)
                    r=min(r,n*p);
            }
            if(r==b+10)
                printf("stay home\n");
            else
                printf("%d\n",r);
        }
        return 0;
    }
