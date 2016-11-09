#include<bits/stdc++.h>
using namespace std;
int ar[5],visit[5],found=0;
void backtrack(int i,int sum)
    {
        if(sum==23 && i==5){
            found=1;
            return;
        }
        for(int j=0;j<5;j++){
            if(!visit[j]){
                visit[j]=1;
                backtrack(i+1,sum+ar[j]);
                backtrack(i+1,sum-ar[j]);
                backtrack(i+1,sum*ar[j]);
                visit[j]=0;
            }
        }
    }
int main()
    {
        while(scanf("%d %d %d %d %d",&ar[0],&ar[1],&ar[2],&ar[3],&ar[4])!=EOF){
            if(!ar[0] && !ar[1] && !ar[2] && !ar[3] && !ar[4])break;
            found = 0;
            for(int i=0;i<5;i++){
                visit[i]=1;
                backtrack(1,ar[i]);
                visit[i]=0;
                if(found)break;
            }
            if(!found)printf("Impossible\n");
            else printf("Possible\n");
        }
        return 0;
    }
