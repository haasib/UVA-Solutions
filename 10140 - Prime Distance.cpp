#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 480001
bitset<mx>bt;
ll isPrime[mx];
vector<ll>v;
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
        for(int i=219;i<mx;i+=2){
            if(!bt[i])isPrime[++e]=i;
        }
    }
bool pr(ll n)
    {
        if(n<mx){
            if(!bt[n])return true;
            else return false;
        }
        else{
            for(ll i=0;i<=e && isPrime[i]*isPrime[i]<=n;i++){
                if(n%isPrime[i]==0)return false;
            }
        }
        return true;
    }
void primeGen(ll L,ll U)
    {
        for(ll i=L;i<=U;i++){
            if(pr(i))v.push_back(i);
        }
    }
int main()
    {
        sieve();
        ll a,b,c,c1,c2,d,d1,d2;
        while(cin>>a>>b){
            c=INT_MAX;
            d=INT_MIN;
            int f=0;
            primeGen(a,b);
            for(int i=0;i<v.size()-1;i++){
                int t=v[i+1]-v[i];
                if(t<c){
                    c=t;
                    c1=v[i];
                    c2=v[i+1];
                    f=1;
                }
                if(d<t){
                    d=t;
                    d1=v[i];
                    d2=v[i+1];
                }
            }
            if(!f)printf("There are no adjacent primes.\n");
            else printf("%lld,%lld are closest, %lld,%lld are most distant.\n",c1,c2,d1,d2);
            v.clear();
        }
        return 0;
    }
