#include<bits/stdc++.h>
using namespace std;
int main()
    {
        string s;
        while(cin>>s){
            list<char>ch;
            list<char>::iterator it=ch.begin();
            for(int i=0;i<s.length();i++){
                if(s[i]=='[')
                    it=ch.begin();
                else if(s[i]==']')
                    it=ch.end();
                else
                    ch.insert(it,s[i]);
            }
            for(it=ch.begin();it!=ch.end();it++)
                printf("%c",*it);
            printf("\n");
        }
        return 0;
    }
