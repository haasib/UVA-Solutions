#include<bits/stdc++.h>
using namespace std;
string ch(string s)
    {
        string m="";
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')c=1;
            else if(c==1)m+=s[i];
        }
        return m;
    }
int main()
    {
        int n;
        scanf("%d",&n);
        stack<string>st;
        getchar();
        for(int p=1;p<=n;p++){
            string s;
            getline(cin,s);
                if(s=="Kick"){
                    if(!st.empty())
                        st.pop();
                }
                else if(s=="Test"){
                    if(!st.empty())
                        cout<<st.top()<<endl;
                    else
                        printf("Not in a dream\n");
                }
                else
                    st.push(ch(s));
        }
        return 0;
    }
