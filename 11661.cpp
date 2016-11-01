#include<bits/stdc++.h>
using namespace std;
int ch(string s)
    {
        int c=INT_MAX;
        for(int i=0;i<s.length();i++){
            int d=0;
            if(s[i]=='Z')return 0;
            else if(s[i]=='R'){
                for(int j=i+1;j<s.length();j++){
                    d++;
                    if(s[j]=='Z')return 0;
                    else if(s[j]=='R'){
                        i=j-1;
                        break;
                    }
                    else if(s[j]=='D'){
                        if(d<c){
                            c=d;
                        }
                        i=j-1;
                        break;
                    }
                }
            }
            else if(s[i]=='D'){
                for(int j=i+1;j<s.length();j++){
                    d++;
                    if(s[j]=='Z')return 0;
                    else if(s[j]=='D'){
                        i=j-1;
                        break;
                    }
                    else if(s[j]=='R'){
                        if(d<c){
                            c=d;
                        }
                        i=j-1;
                        break;
                    }
                }
            }
        }
        return c;
    }
int main()
    {
        int n;
        while(scanf("%d",&n) && n){
            string s;
            cin>>s;
            printf("%d\n",ch(s));
        }
        return 0;
    }
