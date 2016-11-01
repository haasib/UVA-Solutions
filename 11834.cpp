#include<bits/stdc++.h>
using namespace std;
int ch(int a,int b,int r1,int r2)
    {
        int d=r1+r2;
        if(2*r1>b)return 0;
        if(a>=d*2)return 1;
        int c=b-d;
        int p=sqrt(d*d-c*c);
        p+=d;
        if(p<=a)return 1;
        return 0;
    }
int main()
    {
        int a,b,r1,r2;
        while(scanf("%d %d %d %d",&a,&b,&r1,&r2) && a+b+r1+r2!=0){
            if(a<b){
                int t=a;
                a=b;
                b=t;
            }
            if(r1<r2){
                int t=r1;
                r1=r2;
                r2=t;
            }
            if(ch(a,b,r1,r2)==0)
                printf("N\n");
            else
                printf("S\n");
        }
        return 0;
    }
