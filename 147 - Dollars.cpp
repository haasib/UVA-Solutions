#include<bits/stdc++.h>
using namespace std;
#define ll long long
int val[13]={10000,5000,2000,1000,500,200,100,50,20,10,5};
ll dp[15][30005];
ll F(int i,int amount)
    {
        if(i>=11)return 0;
        if(amount==0)return 1;
        if(amount<0)return 0;
        if(dp[i][amount]!=-1)return dp[i][amount];
        ll p=0,q=0;
        if(amount-val[i]>=0)p=F(i,amount-val[i]);
        q=F(i+1,amount);
        return dp[i][amount]=p+q;
    }
int ch(string s)
    {
        int t=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='.'){
                t*=10;
                t+=s[i]-48;
            }
        }
        return t;
    }
int main()
    {
        double d;
        string s;
        int n;
        memset(dp,-1,sizeof(dp));
        while(cin>>s){
            n=ch(s);
            if(!n)break;
            int p=6-s.length();
            for(int i=1;i<=p;i++)printf(" ");
            cout<<s;
            printf("%17lld\n",F(0,n));
        }
        return 0;
    }
