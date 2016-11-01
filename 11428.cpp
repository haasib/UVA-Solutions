#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n;
        while(scanf("%d",&n) && n){
            int c=0;
            for(int i=1;i*i<=n;i++){
                for(int j=1;j*j<=n;j++){
                    if((i*i*i)-(j*j*j)==n){
                        int e=min(i,j);
                        int d=max(i,j);
                        printf("%d %d\n",d,e);
                        c=1;
                        break;
                    }
                }
                if(c==1)
                    break;
            }
            if(c==0)
                printf("No solution\n");
        }
        return 0;
    }
