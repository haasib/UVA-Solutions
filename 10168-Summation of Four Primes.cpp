#include<bits/stdc++.h>
using namespace std;
#define mx 10000001
bitset<mx>bt;
void sieve()
    {
        bt[0]=bt[1]=1;
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<=mx;i+=2){
            if(!bt[i]){
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
    }
int main()
    {
        sieve();
        int n;
        while(scanf("%d",&n)!=EOF){
            if(n<8)
                printf("Impossible.\n");
            else{
                int a,b,s,c=0;
                if(n%2==0){
                    a=2;
                    b=2;
                }
                else{
                    a=2;
                    b=3;
                }
                s=n-(a+b);
                for(int i=2;i<s;i++){
                    if(!bt[i] && !bt[s-i]){
                        printf("%d %d %d %d\n",a,b,i,s-i);
                        c=1;
                        break;
                    }
                }
                if(!c)printf("Impossible.\n");
            }
        }
        return 0;
    }
