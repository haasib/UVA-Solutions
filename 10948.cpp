#include<bits/stdc++.h>
using namespace std;
#define mx 1000001
bitset<mx>bt;
void sieve()
    {
        bt[0]=bt[1]=1;
        int e=-1;
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<=mx;i+=2){
            if(bt[i]==0){
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
    }
int main()
    {
        sieve();
        int n;
        while(scanf("%d",&n) && n){
            int c=0;
            printf("%d:\n",n);
            for(int i=1;i<=n/2;i++){
                if(bt[i]==0 && bt[n-i]==0){
                    printf("%d+%d\n",i,n-i);
                    c=1;
                    break;
                }
            }
            if(!c)printf("NO WAY!\n");
        }
        return 0;
    }
