#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n,m;
        while(scanf("%d %d",&n , &m)){
            if(n==0 && m==0)
                break;
            int b,c=0;
            map<int,int>a;
            for(int i=0;i<n;i++){
                scanf("%d",&b);
                a[b]=1;
            }
            for(int i=0;i<m;i++){
                scanf("%d",&b);
                if(a[b]==1)
                    c++;
            }
            printf("%d\n",c);
        }
        return 0;
    }
