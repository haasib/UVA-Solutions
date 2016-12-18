#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<string,int>mp;
int main()
    {
        int m,n,a,c=0;
        ll r=0;
        string s;
        scanf("%d %d",&m,&n);
        while(m--){
            cin>>s>>a;
            mp[s]=a;
        }
        while(c<n){
            while(cin>>s){
                if(s==".")break;
                if(mp.find(s)!=mp.end())r+=mp[s];
            }
            printf("%lld\n",r);
            r=0;
            c++;
        }
        return 0;
    }
