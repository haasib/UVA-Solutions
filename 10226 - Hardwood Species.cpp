#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<string,int>::iterator it;
int main()
    {
        int tc,counter;
        scanf("%d\n",&tc);
        while(tc--){
            counter=0;
            string s;
            while(getline(cin,s)){
                if(s.empty())break;
                mp[s]++;
                counter++;
            }
            if(mp.size()>0){
                for(it=mp.begin();it!=mp.end();it++){
                    cout<<it->first<< " ";
                    printf("%.4lf\n",((double)it->second/counter)*100.00);
                }
            }
            if(tc>0)printf("\n");
            mp.clear();
        }
        return 0;
    }
