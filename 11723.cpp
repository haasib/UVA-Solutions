#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int r,n,k=0;
        while(scanf("%d %d",&r,&n)){
            if(r==0 && n==0)
                break;
            r--;
            k++;
            printf("Case %d: ",k);
            if(r/n>26)
                printf("impossible\n");
            else
                printf("%d\n",r/n);
        }
        return 0;
    }
