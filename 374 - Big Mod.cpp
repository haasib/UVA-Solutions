#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll BM(ll b, ll p, ll mod)
    {
        if(p==0)return 1;
        ll t=(BM(b,p/2,mod))%mod;
        ll tt=(t*t)%mod;
        if(p%2!=0)tt=(tt*b)%mod;
        return tt;
    }
int main()
    {
        ll B,P,M;
        while(cin>>B>>P>>M){
            cout<<BM(B,P,M)<<endl;
        }
        return 0;
    }
