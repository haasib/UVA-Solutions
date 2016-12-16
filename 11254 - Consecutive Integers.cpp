#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        ll s;
        while(scanf("%lld",&s) && s!=-1){
            ll a,b,c=sqrt(2*s);
            for(ll n=c;n>=1;n--){
                a=((2*s)+n-(n*n))/(2*n);
                if(((2*s)+n-(n*n))%(2*n)==0){
                    b=a+n-1;
                    break;
                }
            }
            printf("%lld = %lld + ... + %lld\n", s,a , b);
        }
        return 0;
    }
