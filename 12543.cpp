#include<bits/stdc++.h>
using namespace std;
int ch(string s)
    {
        int c=0,d=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='-' ){

            }
            else if( (s[i]<'a' || s[i]>'z') && (s[i]<'A' || s[i]>'Z') )
                c++;
        }
        return s.length()-c;
    }
int main()
    {
        string s,m="";
        int c=0;
        while(cin>>s && s!="E-N-D"){
               // cout<<endl<<s<<"  "<<ch(s)<<endl;
            if(ch(s)>c){
                c=ch(s);
                m=s;
            }
        }
        for(int i=0;i<m.length();i++){
            int t=m[i];
            if(t==45 || (t>=65 && t<=90) || (t>=97 && t<=122))
                putchar(tolower(m[i]));
        }
        printf("\n");
        return 0;
    }
