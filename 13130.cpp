#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int tc;
        scanf("%d",&tc);
        while(tc--){
            int a,b,c=0;
            for(int i=0;i<5;i++){
                scanf("%d",&a);
                if(i>0 && c==0){
                    if(b+1!=a)c=1;
                }
                b=a;
            }
            if(!c)printf("Y\n");
            else
                printf("N\n");
        }
        return 0;
    }
