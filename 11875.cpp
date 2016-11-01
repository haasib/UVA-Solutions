#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int tc;
        scanf("%d",&tc);
        for(int p=1;p<=tc;p++){
            int n;
            scanf("%d",&n);
            int r,a;
            for(int i=0;i<n;i++){
                scanf("%d",&a);
                if(i==n/2)r=a;
            }
            printf("Case %d: %d\n",p,r);
        }
        return 0;
    }
