#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int tc;
        scanf("%d",&tc);
        for(int p=1;p<=tc;p++){
            int n;
            scanf("%d",&n);
            string s, m;
            cin>>s>>m;
            int c=0;
            for(int i=0;i<n;i++){
                int t=s[i]-'0';
                int tt=m[i]-'0';
                int a=abs(t-tt);
                int b=abs(9-a)+1;
               // cout<<a<<" "<<b<<endl;
                c+=min(a,b);
            }
            printf("Case %d: %d\n",p,c);
        }
        return 0;
    }
