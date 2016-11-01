#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n;
        while(cin>>n && n!=0){
            string s;
            cin>>s;
            n=s.length()/n;
            string m="";
            int c=0;
            for(int i=0;i<s.length();i++){
                m=s[i]+m;
                c++;
                if(c==n || i==s.length()-1){
                    cout<<m;
                    m="";
                    c=0;
                }
            }
            cout<<endl;
        }
    }
