#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<int>q;
int main()
    {
        int n;
        while(scanf("%d",&n) && n){
            for(int i=1;i<=n;i++)q.push(i);
            printf("Discarded cards:");
            int c=0;
            while(q.size()>=2){
                int t=q.front();
                if(!c)printf(" %d",t);
                else printf(", %d",t);
                q.pop();
                t=q.front();
                q.pop();
                q.push(t);
                c++;
            }
            printf("\n");
            printf("Remaining card: %d\n",q.front());
            q.pop();
        }
        return 0;
    }
