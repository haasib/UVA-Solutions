#include<bits/stdc++.h>
using namespace std;
int ar[55],dp[55][55];
int F(int s,int e)
    {
        if(s+1==e)return 0;
        if(dp[s][e]!=-1)return dp[s][e];
        int r=INT_MAX;
        for(int i=s+1;i<e;i++){
            int left=F(s,i);
            int right=F(i,e);
            int cost=left+right+(ar[e]-ar[s]);
            if(cost<r)r=cost;
        }
        return dp[s][e]=r;
    }
int main()
    {
        int l,n;
        while(scanf("%d",&l) && l){
            memset(dp,-1,sizeof(dp));
            scanf("%d",&n);
            for(int i=1;i<=n;i++)scanf("%d",&ar[i]);
            ar[n+1]=l;
            printf("The minimum cutting is %d.\n",F(0,n+1));
        }
        return 0;
    }
