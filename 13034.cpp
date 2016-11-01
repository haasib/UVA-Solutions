#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int tc;
        scanf("%d",&tc);
        for(int p=1;p<=tc;p++){
            int a,c=0;
            for(int i=0;i<13;i++){
                scanf("%d",&a);
                if(a<=0)
                    c=1;
            }
            printf("Set #%d: ",p);
            if(c==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
        return 0;
    }
