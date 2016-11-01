#include<bits/stdc++.h>
using namespace std;
#define m 1000001
bitset<m>bt;
int dPrime[m];
void sieve()
    {
        bt[0]=bt[1]=1;
        for(int i=4;i<m;i+=2)bt[i]=1;
        for(int i=3;i<=sqrt(m);i+=2){
            if(bt[i]==0){
                for(int j=i*i;j<m;j+=i)bt[j]=1;
            }
        }
    }
int sum(int n)
    {
        int s=0;
        while(n!=0){
            s+=n%10;
            n/=10;
        }
        return s;
    }
int main()
    {
        sieve();
        int c=0;
        for(int p=0;p<m;p++){
            if(bt[p]==0 && bt[sum(p)]==0)
                c++;
            dPrime[p]=c;
        }
        int k;
        scanf("%d",&k);
        for(int p=1;p<=k;p++){
            int a,b;
            scanf("%d %d",&a,&b);
            printf("%d\n",dPrime[b]-dPrime[a-1]);
        }
        return 0;
    }
