#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        ll n;
        while(cin>>n && n!=0){
            ll r=-1,c=0;
            if(n<0)
                n=abs(n);
            for(ll i=2;i*i<=n && n!=1;i++){
                while(n%i==0){
                    n/=i;
                    r=i;
                }
                if(r==i)
                    c++;
            }
            if(n!=1 && r!=-1)
                r=n;
            else if(c==1)
                r=-1;
            cout<<r<<endl;
        }
        return 0;
    }
