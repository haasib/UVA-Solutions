#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;
void F(string s)
    {
        int c=0;
        string m="",ss="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')c=1;
            else if(c==0)m+=s[i];
            else ss+=s[i];
        }
        mp[ss]=m;
    }
int main()
    {
        string s;
        while(getline(cin,s)){
            if(s.empty())break;
            F(s);
        }
        while(cin>>s){
            if(mp.find(s)!=mp.end())cout<<mp[s]<<endl;
            else printf("eh\n");
        }
        return 0;
    }
