#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        ll n;
        while(cin>>n && n!=0){
            int m=n-1;
            ll r=0;
            if(n%2==0){
                n/=2;
                r=(n*((2*n)-1)*((2*n)+1))/3;
            }
            else{
                n/=2;
                r=(2*n*(n+1)*(2*n+1))/3;
            }
        printf("%lf\n",(double)sqrt((r*2)/(m*1.0)));
        }
        return 0;
    }
