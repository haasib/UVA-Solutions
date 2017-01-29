#include<bits/stdc++.h>
using namespace std;
#define mx 105
int dp[mx][mx],ar[mx],br[mx],n,m;
int F(int i,int j)
    {
        if(i>=n || j>=m)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int p=0;
        if(ar[i]==br[j])p=1+F(i+1,j+1);
        else p=max(F(i+1,j),F(i,j+1));
        return dp[i][j]=p;
    }
int main()
    {
        int c=0;
        while(cin>>n>>m){
            if(!n && !m)break;
            c++;
            for(int i=0;i<n;i++)scanf("%d",&ar[i]);
            for(int i=0;i<m;i++)scanf("%d",&br[i]);
            memset(dp,-1,sizeof(dp));
            printf("Twin Towers #%d\n",c);
            printf("Number of Tiles : %d\n\n",F(0,0));
        }
        return 0;
    }
