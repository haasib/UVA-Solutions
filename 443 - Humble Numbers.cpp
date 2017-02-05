#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 2000000000
vector<ll>v;
ll pwr(ll n, ll p)
    {
        if(p==0)return 1;
        ll t=pwr(n,p/2);
        ll tt=t*t;
        if(p%2!=0)tt*=n;
        return tt;
    }
void F()
    {
        ll a,b,c,d;
        for(ll i=0;i<=13;i++){
            a=pwr(7,i);
            if(a>mx)break;
            for(ll j=0;j<14;j++){
                b=pwr(5,j);
                if(a*b>mx)break;
                for(ll k=0;k<20;k++){
                    c=pwr(3,k);
                    if(a*b*c>mx)break;
                    for(ll m=0;m<32;m++){
                        d=pwr(2,m);
                        if(a*b*c*d>mx)break;
                        v.push_back(a*b*c*d);
                    }
                }
            }
        }
        sort(v.begin(),v.end());
        //cout<<v.size()<<endl;
    }
int main()
    {
        F();
        int n;
        while(scanf("%d",&n) && n){
            printf("The %d",n);
            if(n%100==11 || n%100==12 || n%100==13)printf("th");
            else if(n%10==1)printf("st");
            else if(n%10==2)printf("nd");
            else if(n%10==3)printf("rd");
            else printf("th");
            printf(" humble number is %lld.\n",v[n-1]);
            //cout<<v[n-1]<<endl;
        }
        return 0;
    }
