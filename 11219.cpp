#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int tc;
        scanf("%d",&tc);
        for(int p=1;p<=tc;p++){
            int d,m,y,d1,m1,y1;
            char c;
            scanf("%d %c %d %c %d",&d,&c,&m,&c,&y);
            scanf("%d %c %d %c %d",&d1,&c,&m1,&c,&y1);
            printf("Case #%d: ",p);
            if(d1>d){
                d+=30;
                m1++;
            }
            if(m1>m){
                m+=12;
                y1+=1;
            }
            int r=y-y1;
            if(r<0)
                printf("Invalid birth date\n");
            else if(r>130)
                printf("Check birth date\n");
            else
                printf("%d\n",r);
        }
        return 0;
    }
