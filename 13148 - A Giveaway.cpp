#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>mp;
void sett()
    {
        mp[1]=1;
        mp[8]=1;
        mp[64]=1;
        mp[729]=1;
        mp[4096]=1;
        mp[15625]=1;
        mp[46656]=1;
        mp[117649]=1;
        mp[262144]=1;
        mp[531441]=1;
        mp[1000000]=1;
        mp[1771561]=1;
        mp[2985984]=1;
        mp[4826809]=1;
        mp[7529536]=1;
        mp[11390625]=1;
        mp[16777216]=1;
        mp[24137569]=1;
        mp[34012224]=1;
        mp[47045881]=1;
        mp[64000000]=1;
        mp[85766121]=1;
    }
int main()
    {
        sett();
        int n;
        while(scanf("%lld",&n) && n){
            if(mp.find(n)!=mp.end())printf("Special\n");
            else printf("Ordinary\n");
        }
        return 0;
    }
