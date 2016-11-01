#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int b3,g3,c3,b1,g1,c1,b2,g2,c2,a[6];
        while(scanf("%d %d %d %d %d %d %d %d %d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)!=EOF){
            a[0]=b2+b3+c1+c3+g1+g2;
            a[1]=b2+b3+c1+c2+g1+g3;
            a[2]=b1+b3+c2+c3+g1+g2;
            a[3]=b1+b2+c2+c3+g1+g3;
            a[4]=b1+b3+c1+c2+g3+g2;
            a[5]=b2+b1+c1+c3+g3+g2;
            int n=INT_MAX;
            for(int i=0;i<6;i++){
                if(a[i]<n)
                    n=a[i];
            }
            if(a[0]==n)printf("BCG ");
            else if(a[1]==n)printf("BGC ");
            else if(a[2]==n)printf("CBG ");
            else if(a[3]==n)printf("CGB ");
            else if(a[4]==n)printf("GBC ");
            else printf("GCB ");
            printf("%d\n",n);
        }
        return 0;
    }
