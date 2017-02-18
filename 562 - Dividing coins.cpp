#include<bits/stdc++.h>
using namespace std;
int dp[105][50005],ar[105],n,tc;
int F(int i,int j,int k)
    {
        if(i>=n)return (j-k<0)?k-j:j-k;
        if(dp[i][j]!=-1)return dp[i][j];
        int p=0;
        p=min(F(i+1,j+ar[i],k),F(i+1,j,k+ar[i]));
        return dp[i][j]=p;
    }
int main()
    {
        scanf("%d",&tc);
        while(tc--){
            scanf("%d",&n);
            for(int i=0;i<n;i++)scanf("%d",&ar[i]);
            memset(dp,-1,sizeof(dp));
            printf("%d\n",F(0,0,0));
        }
        return 0;
    }
