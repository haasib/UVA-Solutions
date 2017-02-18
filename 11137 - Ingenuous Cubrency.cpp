#include<bits/stdc++.h>
using namespace std;
#define ll long long
int val[25],e=-1;
ll dp[25][10005];
void pregen()
    {
        val[++e]=1;
        int i=2;
        while(1){
            int p=i*i*i;
            if(p>10000)break;
            val[++e]=p;
            i++;
        }
        //cout<<e<<" "<<val[e]<<endl;
    }
ll F(int i,int amount)
    {
        if(i>e)return 0;
        if(amount==0)return 1;
        if(amount<0)return 0;
        if(dp[i][amount]!=-1)return dp[i][amount];
        ll p=0,r=0;
        if(amount-val[i]>=0){
            p=F(i,amount-val[i]);
            //q=F(i+1,amount-val[i]);
        }
        r=F(i+1,amount);
        return dp[i][amount]=p+r;
    }
int main()
    {
        pregen();
        //for(int i=0;i<=e;i++)cout<<val[i]<< " ";
        //cout<<endl;
        int n;
        memset(dp,-1,sizeof(dp));
        while(scanf("%d",&n)==1){
            printf("%lld\n",F(0,n));
        }
        return 0;
    }
