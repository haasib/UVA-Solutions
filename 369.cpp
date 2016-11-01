#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        int n,k;
        while(cin>>n>>k){
            if(n==0 && k==0)
                break;
            ll r=1;
            int p=k;
            if(k>n/2)
                k=n-k;
            for(int i=0;i<k;i++){
                r*=(n-i);
                r/=(i+1);
            }
            cout<<n<<" things taken "<<p<<" at a time is "<<r<<" exactly."<<endl;
        }
        return 0;
    }

