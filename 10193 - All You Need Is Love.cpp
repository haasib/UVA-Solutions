#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll F(string s)
    {
        ll r=0;
        int c=pow(2,s.length()-1);
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                r+=c;
            }
            c/=2;
        }
        return r;
    }
ll gcd(ll n, ll m)
    {
        if(n==0)return m;
        return gcd(m%n,n);
    }
int main()
    {
        string s,m;
        ll a,b;
        int tc,counter=0;
        scanf("%d",&tc);
        //getchar();
        while(tc--){
            counter++;
            cin>>s>>m;
            a=F(s);
            b=F(m);
            printf("Pair #%d: ",counter);
            if(gcd(a,b)!=1)printf("All you need is love!\n");
            else printf("Love is not all you need!\n");
        }
        return 0;
    }
