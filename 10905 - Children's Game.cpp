#include<bits/stdc++.h>
using namespace std;
string s[55];
bool ch(string ss,string m)
    {
        return ss+m>m+ss;
    }
int main()
    {
        int n;
        while(scanf("%d",&n) && n){
            for(int i=0;i<n;i++)cin>>s[i];
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(s[j][0]>s[i][0]){
                        string t=s[i];
                        s[i]=s[j];
                        s[j]=t;
                    }
                    else if(s[i][0]==s[j][0]){
                        if(ch(s[j],s[i])){
                            string t=s[i];
                            s[i]=s[j];
                            s[j]=t;
                        }
                    }
                }
            }
            for(int i=0;i<n;i++)cout<<s[i];
            cout<<endl;
        }
        return 0;
    }
