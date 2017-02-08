#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        ll n;
        while(cin>>n && n!=-1){
            while(n%2==0){
                cout<<"    2"<<endl;
                n/=2;
            }
            for(ll i=3;i*i<=n;i+=2){
                while(n%i==0){
                    n/=i;
                    cout<<"    "<<i<<endl;
                }
            }
            if(n>1)cout<<"    "<<n<<endl;
            cout<<endl;
        }
        return 0;
    }
