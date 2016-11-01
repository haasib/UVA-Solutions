#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ch(ll n)
    {
        int c=1,e=0;
        while(n%2==0){
            n/=2;
            e++;
        }
        if(e>0)c*=(e+1);
        for(int i=3;i<=sqrt(n);i+=2){
            e=0;
            while(n%i==0){
                n/=i;
                e++;
            }
            if(e>=1)c*=(e+1);
        }
        if(n>1)c*=2;
        return c;
    }
int main()
    {
        int k;
        cin>>k;
        for(int p=1;p<=k;p++){
            ll m,n;
            cin>>m>>n;
            int d=0,e;
            for(int i=m;i<=n;i++){
                int a=ch(i);
                if(d<a){
                    d=a;
                    e=i;
                }
            }
            cout<<"Between "<<m<<" and "<<n<<", "<<e<<" has a maximum of "<<d<<" divisors."<<endl;
        }
        return 0;
    }
