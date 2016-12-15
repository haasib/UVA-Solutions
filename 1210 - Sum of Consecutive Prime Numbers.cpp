#include<bits/stdc++.h>
using namespace std;
#define mx 10001
bitset<mx>bt;
int isPrime[mx];
int e=-1;
void sieve()
    {
        bt[0]=bt[1]=1;
        isPrime[++e]=2;
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<=mx;i+=2){
            if(!bt[i]){
                isPrime[++e]=i;
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
        for(int i=101;i<mx;i+=2){
            if(!bt[i])isPrime[++e]=i;
        }
    }
int main()
    {
        sieve();
        int n;
        while(scanf("%d",&n) && n){
            int c=0;
            for(int i=0;i<=e && isPrime[i]<=n;i++){
                int r=0;
                for(int j=i;j<=e && isPrime[j]<=n;j++){
                    r+=isPrime[j];
                    if(r>n)break;
                    if(r==n){
                        c++;
                        break;
                    }
                }
            }
            printf("%d\n",c);
        }
        return 0;
    }
