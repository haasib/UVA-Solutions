#include<bits/stdc++.h>
using namespace std;
int ar[13],visit[13],n;
vector<int>ans;
void backtrack(int i)
    {
        if(ans.size()==6){
            printf("%d",ans[0]);
            for(int j=1;j<6;j++)printf(" %d",ans[j]);
            printf("\n");
            return;
        }
        for(int j=i;j<n;j++){
                ans.push_back(ar[j]);
                visit[j]=1;
                backtrack(j+1);
                visit[j]=0;
                ans.pop_back();
        }
    }
int main()
    {
        int c=0;
        while(scanf("%d",&n) && n){
            c++;
            if(c>1)printf("\n");
            for(int i=0;i<n;i++)scanf("%d",&ar[i]);
            backtrack(0);
        }
        return 0;
    }
