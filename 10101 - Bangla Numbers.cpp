#include<bits/stdc++.h>
using namespace std;
#define ll long long
void F(ll n)
    {
        if(n>=10000000){
            F(n/10000000);
            n%=10000000;
            printf(" kuti");
        }
        if(n>=100000){
            F(n/100000);
            n%=100000;
            printf(" lakh");
        }
        if(n>=1000){
            F(n/1000);
            n%=1000;
            printf(" hajar");
        }
        if(n>=100){
            F(n/100);
            n%=100;
            printf(" shata");
        }
        if(n>0 && n<100){
            printf(" %lld",n);
            n/=100;
        }
    }
int main()
    {
        ll n;
        int c=0;
        while(cin>>n){
            c++;
            printf("%4d.",c);
            if(!n)printf(" 0");
            else F(n);
            printf("\n");
        }
        return 0;
    }
