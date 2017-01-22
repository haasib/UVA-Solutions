#include<bits/stdc++.h>
using namespace std;
#define mem(nn) memset(nn,-1,sizeof(nn))
int dp[7][7500],val[5]={50,25,10,5,1},n;
int F(int i,int taken)
    {
        if(i>=5){
            if(taken==0)return 1;
            else return 0;
        }
        if(dp[i][taken]!=-1)return dp[i][taken];
        int p=0,q=0;
        if(taken-val[i]>=0)p=F(i,taken-val[i]);
        q=F(i+1,taken);
        return dp[i][taken]=p+q;
    }
int main()
    {
        mem(dp);
        while(scanf("%d",&n)!=EOF){
            printf("%d\n",F(0,n));
        }
        return 0;
    }
