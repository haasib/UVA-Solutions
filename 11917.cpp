#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int tc;
        scanf("%d",&tc);
        for(int p=1;p<=tc;p++){
            int n,d;
            scanf("%d",&n);
            int a[n];
            string s[n],m;
            for(int i=0;i<n;i++){
                cin>>s[i]>>a[i];
            }
            scanf("%d",&d);
            cin>>m;
            string c="Do your own homework!";
            for(int i=0;i<n;i++){
                if(s[i]==m){
                    if(a[i]<=d)
                        c="Yesss";
                    else if(a[i]<=d+5)
                        c="Late";
                    break;
                }
            }
            cout<<"Case "<<p<<": "<<c<<endl;
        }
        return 0;
    }
