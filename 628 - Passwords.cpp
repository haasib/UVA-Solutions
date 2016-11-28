#include<bits/stdc++.h>
using namespace std;
int ar[10],len,n,in;
string s[105],rules;
void backtrack(int i)
    {
        if(i==n){
            int e=-1;
            for(int j=0;j<len;j++){
                if(rules[j]=='0')printf("%d",ar[++e]);
                else cout<<s[in];
            }
            printf("\n");
            return;
        }
        for(int j=0;j<=9;j++){
            ar[i]=j;
            backtrack(i+1);
        }
    }
int main()
    {
        int tc,r;
        while(scanf("%d",&tc)!=EOF){
            printf("--\n");
            for(int i=0;i<tc;i++)cin>>s[i];
            scanf("%d",&r);
            for(int p=0;p<r;p++){
                cin>>rules;
                n=0;
                for(int i=0;i<rules.length();i++){
                    if(rules[i]=='0')n++;
                }
            }
            for(int i=0;i<tc;i++){
                in=i;
                len=rules.length();
                backtrack(0);
            }
        }
        return 0;
    }
