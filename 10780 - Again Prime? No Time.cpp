#include<bits/stdc++.h>
using namespace std;
bitset<5001>bt;
int isPrime[5005];
void sieve()
    {
        int e=-1;
        bt[0]=bt[1]=1;
        isPrime[++e]=2;
        for(int i=4;i<5001;i+=2)bt[i]=1;
        for(int i=3;i*i<=5001;i+=2){
            if(!bt[i]){
                isPrime[++e]=i;
                for(int j=i*i;j<5001;j+=i)bt[j]=1;
            }
        }
        for(int i=71;i<5001;i+=2){
            if(!bt[i])isPrime[++e]=i;
        }
    }
int Ipf(int n,int k)
    {
        int e=k,b=0;
        while(n/e>=1){
            b+=n/e;
            e*=k;
        }
        return b;
    }
int pf(int n,int m)
    {
        int p=0,r=INT_MAX;
        while(m>1){
            if(m%isPrime[p]==0){
                int c=0;
                while(m%isPrime[p]==0){
                    m/=isPrime[p];
                    c++;
                }
                int d=Ipf(n,isPrime[p]);
                if(d<c)return 0;
                r=min(r,d/c);
            }
            p++;
        }
        if(r==INT_MAX)return 0;
        else return r;
    }
int main()
    {
        sieve();
        int tc,n,m,r;
        scanf("%d",&tc);
        for(int p=1;p<=tc;p++){
            scanf("%d %d",&m,&n);
            r=pf(n,m);
            printf("Case %d:\n",p);
            if(r<=0)printf("Impossible to divide\n");
            else printf("%d\n",r);
        }
        return 0;
    }
