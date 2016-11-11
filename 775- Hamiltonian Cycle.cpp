#include<bits/stdc++.h>
using namespace std;
int visit[257],ar[257],n,found = 0;
vector<int>v[257];
void backtrack(int i,int edge)
    {
        if(found)return;
        if(i==n){
            bool ch=false;
            int p=ar[i-1];
            //cout<<"P : "<<p<<endl;
            for(int j=0;j<v[p].size();j++){
                if(v[p][j]==1){
                    ch=true;
                    break;
                }
            }
            if(ch){
                printf("1");
                for(int j=1;j<i;j++)printf(" %d",ar[j]);
                printf(" 1\n");
                found = 1;
            }
            return;
        }
        for(int j=0;j<v[edge].size();j++){
            if(!visit[v[edge][j]]){
                visit[v[edge][j]]=1;
                ar[i]=v[edge][j];
                backtrack(i+1,v[edge][j]);
                visit[v[edge][j]]=0;
            }
        }
    }
int main()
    {
        while(scanf("%d",&n)!=EOF){
            for(int i=1;i<=n;i++){
                v[i].clear();
                visit[i]=0;
            }
            getchar();
            char c;
            int a,b;
            while((c=getchar())!='%'){
                ungetc(c,stdin);
                scanf("%d %d",&a,&b);
                v[a].push_back(b);
                v[b].push_back(a);
                getchar();
            }
            found = 0;
            ar[0]=1;
            visit[1]=1;
            backtrack(1,1);
            if(!found)printf("N\n");
        }
        return 0;
    }
