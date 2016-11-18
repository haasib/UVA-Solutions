#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;
map<string,string>::iterator it;
int main()
    {
        int n;
        scanf("%d",&n);
        getchar();
        while(n--){
            string s,m;
            getline(cin,s);
            getline(cin,m);
            mp[s]=m;
            mp[m]=s;
        }
        scanf("%d",&n);
        getchar();
        while(n--){
            string s;
            getline(cin,s);
            it=mp.find(s);
            if(it!=mp.end())cout<<it->second<<endl;
        }
        return 0;
    }
