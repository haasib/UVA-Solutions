#include<bits/stdc++.h>
using namespace std;
map<char,double>mp;
map<char,double>::iterator it;
int main()
    {
        int tc;
        scanf("%d",&tc);
        while(tc--){
            int n,res=0;
            string s;
            double a,r=0.0;
            scanf("%d",&n);
            char ch;
            for(int i=0;i<n;i++){
                cin>>ch>>a;
                mp[ch]=a;
            }
            scanf("%d",&n);
            cin.ignore();
            while(n--){
                getline(cin,s);
                for(int i=0;i<s.size();i++){
                    it=mp.find(s[i]);
                    if(it!=mp.end())
                        res+=it->second;
                }
            }
            r=res/100.0;
            printf("%.2lf$\n",r);
            mp.clear();
        }
        return 0;
    }
