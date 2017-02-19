#include<bits/stdc++.h>
using namespace std;
bool F(string s,string m)
    {
        if(s.length()!=m.length())return false;
        int i=0,j=0,c=1;
        while(i<s.length() && j<m.length()){
            if(s[i]!=m[j]){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                if(m[j]=='a' || m[j]=='e' || m[j]=='i' || m[j]=='o' || m[j]=='u')c=1;
                else c=0;
            }
            else c=0;
            }
            i++;
            j++;
        }
        return c==1;
    }
int main()
    {
        string s,m;
        int tc;
        scanf("%d",&tc);
        while(tc--){
            cin>>s>>m;
            if(!F(s,m))printf("No\n");
            else printf("Yes\n");
        }
        return 0;
    }
