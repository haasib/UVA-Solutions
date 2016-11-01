#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int k;
        cin>>k;
        for(int p=1;p<=k;p++){
            string s;
            cin>>s;
            if(s=="1" || s=="4" || s=="78")
                cout<<"+"<<endl;
            else{
                int n=s.length();
                if(s[n-2]=='3' && s[n-1]=='5')
                    cout<<"-"<<endl;
                else if(s[0]=='9' && s[n-1]=='4')
                    cout<<"*"<<endl;
                else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
                    cout<<"?"<<endl;
            }
        }
        return 0;
    }
