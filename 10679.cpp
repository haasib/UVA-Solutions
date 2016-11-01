#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int k;
        cin>>k;
        for(int p=1;p<=k;p++){
            string s;
            cin>>s;
            int q;
            cin>>q;
            string m;
            for(int i=0;i<q;i++){
                cin>>m;
                if(strstr(s.c_str(),m.c_str())){
                    cout << "y"<<endl;
                }
                else
                    cout<<"n"<<endl;
            }
        }
        return 0;
    }
