#include<bits/stdc++.h>
using namespace std;
#define ll long long
double LOG10(double n)
    {
        return log(n)/log(10);
    }
int main()
    {
        ll n,m;
        while(cin>>n>>m){
            double d=0;
            for(ll i=0;i<m;i++)d+=LOG10(n-i)-LOG10(i+1);
            printf("%lld\n",(ll)floor(d)+1);
        }
        return 0;
    }
