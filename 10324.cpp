#include<bits/stdc++.h>
using namespace std;
bool ch(string s,int a,int b)
    {
        char c=s[a];
        for(int i=a+1;i<=b;i++){
            if(s[i]!=c)
                return false;
        }
        return true;
    }
int main()
    {
        string s;
        int k=0;
        while(cin>>s){
            k++;
            int n,a,b;
            scanf("%d",&n);
            printf("Case %d:\n",k);
            for(int i=0;i<n;i++){
                scanf("%d %d",&a,&b);
                int c=min(a,b);
                int d=max(a,b);
                if(ch(s,c,d))
                    printf("Yes\n");
                else
                    printf("No\n");
            }
        }
        return 0;
    }
