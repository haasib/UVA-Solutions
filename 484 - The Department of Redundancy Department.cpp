#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
vector<int>v;
int main()
    {
        int n;
        while(scanf("%d",&n)==1){
            if(mp[n]==0){
                mp[n]++;
                v.push_back(n);
            }
            else
                mp[n]++;
        }
        for(int it=0;it<v.size();it++)cout<<v[it]<<" "<<mp[v[it]]<<endl;
        return 0;
    }
