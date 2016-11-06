#include<bits/stdc++.h>
using namespace std;
int n,visit[20],ans[20];
bool isPrime(int n)
    {
        for(int i=2;i*i<=n;i++){
            if(n%i==0)return false;
        }
        return true;
    }
void backtrack(int i)
    {
        if(i==n){
            if(!isPrime(1+ans[n-1]))return;
            printf("1");
            for(int j=1;j<n;j++)printf(" %d",ans[j]);
            printf("\n");
            return;
        }
        for(int j=2;j<=n;j++){
            if(!visit[j] && isPrime(j+ans[i-1])){
                visit[j]=1;
                ans[i]=j;
                backtrack(i+1);
                visit[j]=0;
            }
        }
    }
int main()
    {
        int p=0;
        while(scanf("%d",&n)!=EOF){
            p++;
            if(p>1)
                printf("\n");
            ans[0]=1;
            printf("Case %d:\n",p);
            backtrack(1);
        }
        return 0;
    }
