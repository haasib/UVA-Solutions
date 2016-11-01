#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fact(int a)
    {
        if(a==0)
            return 1;
        return a*fact(a-1);
    }
int main()
    {
        int k;
        cin>>k;
        for(int p=1;p<=k;p++){
            string s;
            cin>>s;
            cout<<"Data set "<<p<<": ";
            ll c=fact(s.length());
            for(int i=0;i<s.length();i++){
                    int t=0;
                for(int j=0;j<s.length();j++){
                    if(j<i && s[i]==s[j])
                        break;
                    if(s[i]==s[j])
                        t++;
                    if(j==s.length()-1){
                        if(t>1)
                            c/=fact(t);
                    }
                }
            }
            cout<<c<<endl;
        }
        return 0;
    }
