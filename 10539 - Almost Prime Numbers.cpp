#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000001
#define mm 1000000000000
bitset<mx>bt;
ll prime[78500],e=-1;
void sieve()
    {
        bt[0]=bt[1]=1;
        prime[++e]=2;
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<=mx;i+=2){
            if(!bt[i]){
                prime[++e]=i;
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
        for(int i=1001;i<mx;i+=2){
            if(!bt[i])prime[++e]=i;
        }
        //cout<<e<<endl;
    }
ll F(ll a,ll b)
    {
        ll cnt=0;
        for(ll i=0;i<=e;i++){
            //cout<<prime[i]<<endl;
            if(prime[i]*prime[i]>b)break;
            for(ll j=prime[i]*prime[i];j<=b;j*=prime[i]){
                //cout<<j<<endl;
                if(j>=a)cnt++;
            }
        }
        return cnt;
    }
int main()
    {
        sieve();
        //cout<<prime[0]<<endl;
        int tc;
        ll a,b;
        scanf("%d",&tc);
        while(tc--){
            scanf("%lld %lld",&a,&b);
            printf("%lld\n",F(a,b));
        }
        return 0;
    }
