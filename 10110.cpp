#include<bits/stdc++.h>
using namespace std;
int main()
    {
        long long int n;
        while(cin>>n && n!=0){
            long long int m=sqrt(n+0.5);
            if(m*m==n)cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        return 0;
    }
