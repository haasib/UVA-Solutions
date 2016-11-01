#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int a[5];
        while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]){
            int b,c=0;
            for(int i=0;i<5;i++){
                cin>>b;
                if(b==a[i]){
                    c=1;
                }
            }
            if(c==0)
                cout<<"Y"<<endl;
            else
                cout<<"N"<<endl;
        }
        return 0;
    }
