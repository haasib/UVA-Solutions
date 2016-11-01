#include<bits/stdc++.h>
using namespace std;
int main()
    {
        string s;
        set<string>st;
        while(cin>>s){
            string m;
            for(int i=0;i<=s.length();i++){
                if(isalpha(s[i]))m+=tolower(s[i]);
                else if(!m.empty()){
                    st.insert(m);
                    m="";
                }
            }
        }
        for(set<string>::iterator it=st.begin();it!=st.end();it++)
            cout<<*it<<endl;
        return 0;
    }
