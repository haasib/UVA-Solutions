#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 65001
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
ll pwr(ll n, ll p, ll mod)
    {
        if(p==0)return 1;
        ll t=pwr(n,p/2,mod)%mod;
        ll tt=(t*t)%mod;
        if(p%2!=0)tt=(tt*n)%mod;
        return tt%mod;
    }
int main()
    {
        sieve();
        int n,f;
        while(scanf("%d",&n) && n){
            f=1;
            if(!bt[n])f=0;
            else {
               for(int i=2;i<n;i++){
                    if(pwr(i,n,n)!=i){
                        f=0;
                        break;
                    }
                }
            }
            if(f)printf("The number %d is a Carmichael number.\n",n);
            else printf("%d is normal.\n",n);
        }
        return 0;
    }
