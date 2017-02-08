#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000001
#define mm 1000000000000
bitset<mx>bt;
ll prime[78500],e=-1;
vector<ll>v;
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
void F()
    {
        //ll cnt=0;
        for(ll i=0;i<=e;i++){
            //cout<<prime[i]<<endl;
            if(prime[i]*prime[i]>mm)break;
            for(ll j=prime[i]*prime[i];j<=mm;j*=prime[i]){
                //cout<<j<<endl;
                v.push_back(j);
            }
        }
        sort(v.begin(),v.end());
        //return cnt;
    }
int main()
    {
        sieve();
        F();
        //cout<<v.size()<<" "<<v[0]<<endl;
        //cout<<prime[0]<<endl;
        int tc;
        ll a,b;
        scanf("%d",&tc);
        while(tc--){
            scanf("%lld %lld",&a,&b);
            //printf("%lld\n",F(a,b));
            ll p=upper_bound(v.begin(),v.end(),b)-v.begin();
            ll q=lower_bound(v.begin(),v.end(),a)-v.begin();
            printf("%lld\n",p-q);
        }
        return 0;
    }
