#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
void pf(ll n)
    {
        for(ll i=2;i*i<=n;i++){
            while(n%i==0){
                mp[i]++;
                n/=i;
            }
        }
        if(n>1)mp[n]++;
    }
int main()
    {
        int n;
        while(scanf("%lld",&n) && n){
            mp.clear();
            ll x=n;
            if(x<0)x*=-1;
            pf(x);
            int p;
            for(p=32;p>=1;p--){
                bool f=true;
                for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++){
                    if(it->second%p!=0){
                        f=false;
                        break;
                    }
                }
                if(n>=0 && f){

                    break;
                }
                else if(n<0 && f && (p%2==1)){

                    break;
                }
            }
            printf("%d\n",p);
        }
        return 0;
    }
