#include<bits/stdc++.h>
using namespace std;
#define all(ar) ar.begin(), ar.end()
map<char,int>mp;
string itos(int n)
    {
        string s="";
        while(n){
            s+=(n%10)+48;
            n/=10;
        }
        reverse(all(s));
        return s;
    }
string sett(string s)
    {
        int c=1;
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]==0){
                mp[s[i]]=c;
                c++;
            }
        }
        string m="";
        for(int i=0;i<s.length();i++){
            int t=mp[s[i]];
            m+=itos(t);
        }
        return m;
    }
string ch(string s)
    {
        string m="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='2')
                s[i]='5';
            else if(s[i]=='5')s[i]='2';
            else if(s[i]=='6')s[i]='9';
            else if(s[i]=='9')s[i]='6';
            m+=s[i];
        }
        return m;
    }
int main()
    {
        string s;
        while(cin>>s){
            string m=sett(s);
            cout<<ch(m)<<endl;
            mp.clear();
        }
        return 0;
    }
