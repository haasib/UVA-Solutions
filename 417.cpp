#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
void pregen()
    {
        int c=0;
        queue<string>st;
        for(char i='a';i<='z';i++)st.push(string(1,i));
        string s;
        while(!st.empty()){
            s=st.front();
            st.pop();
            mp[s]=++c;
            if(s.length()==5)continue;
            for(char i=s[s.length()-1]+1;i<='z';i++)st.push(s+i);
        }
    }
int main()
    {
        pregen();
        string s;
        while(cin>>s){
            map<string,int>::iterator it=mp.find(s);
            if(it==mp.end())
                printf("0\n");
            else
                printf("%d\n",it->second);
        }
    }
