#include<bits/stdc++.h>
using namespace std;
#define mx 100000001
#define ll long long
#define pb push_back
bitset<mx>bt;
//ll prime[3001150],e=-1;
vector<int>v;
void sieve()
    {
        bt[0]=bt[1]=1;
        v.pb(2);
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<=mx;i+=2){
            if(!bt[i]){
                v.pb(i);
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
        for(int i=7071;i<mx;i+=2){
            if(!bt[i])v.pb(i);
        }
        //cout<<e<<endl;
    }
bool isPrime(int n)
    {
        if(n<=0 || n==1)return false;
        if(!bt[n])return true;
        return false;
    }
void F(int n)
    {
        //if(n==1){printf("1 is not the sum of two primes!\n");return;}
        int e=lower_bound(v.begin(),v.end(),ceil(n/2.0))-v.begin();
        //cout<<e<<endl;
        int i=e,a,b,c=0,r=INT_MAX;
        while(i>=0 &&  !c){
            if(v[i]==n-v[i]){i--;continue;}
            int t=v[i];
            int tt=n-v[i];
            if(tt>0 && isPrime(tt)){
                c=1;
                if(t>tt)swap(t,tt);
                if(tt-t<r){
                    r=tt*t;
                    a=t;
                    b=tt;
                }
                else break;
            }
            i--;
        }
        if(!c)printf("%d is not the sum of two primes!\n",n);
        else printf("%d is the sum of %d and %d.\n",n,a,b);
    }
int main()
    {
        sieve();
        int n,a,b;
        while(scanf("%d",&n)!=EOF){
            if(n%2!=0){
                a=2;
                b=n-2;
                if(b>0){
                if(isPrime(b))printf("%d is the sum of %d and %d.\n",n,a,b);
                else printf("%d is not the sum of two primes!\n",n);
                }

                else printf("%d is not the sum of two primes!\n",n);
            }
            else
                F(n);
        }
        return 0;
    }
