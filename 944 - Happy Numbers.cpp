#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int F(int n)
    {
        int r=0;
        while(n!=0){
            int t=n%10;
            r+=t*t;
            n/=10;
        }
        return r;
    }
void pregen()
    {
        for(int i=1;i<=99999;i++){
            int n=i,c=0;
                while(n>9){
                    n=F(n);
                    c++;
                }
                c++;
                if(n==7)c+=5;
                if(n==7 || n==1)ar[i]=c;
        }
    }
int main()
    {
        pregen();
        int a,b,t=0;
        while(scanf("%d %d",&a,&b)==2){
            t++;
            if(t>1)printf("\n");
            for(int i=a;i<=b;i++){
                if(ar[i])printf("%d %d\n",i,ar[i]);
            }
        }
        return 0;
    }
