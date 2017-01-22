#include<bits/stdc++.h>
using namespace std;
#define mem(nn) memset(nn,-1,sizeof(nn))
#define ll long long
ll dp[7][30005];
int val[5]={1,5,10,25,50},n;
ll F(int i,int taken)
    {
        if(i>=5){
            if(taken==0)return 1;
            else return 0;
        }
        if(dp[i][taken]!=-1)return dp[i][taken];
        ll p=0,q=0;
        if(taken-val[i]>=0)p=F(i,taken-val[i]);
        q=F(i+1,taken);
        return dp[i][taken]=p+q;
    }
int main()
    {
        mem(dp);
        while(scanf("%d",&n)!=EOF){
            ll t=F(0,n);
            (t==1)?printf("There is only %lld way to produce %d cents change.\n",t,n) :
                printf("There are %lld ways to produce %d cents change.\n",t,n);
        }
        return 0;
    }
