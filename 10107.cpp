#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        ll a[10000];
        ll n;
        int c=0;
        while(cin>>n){
            a[c]=n;
            sort(a,a+c+1);
            if(c%2==0)
                cout<<a[c/2]<<endl;
            else{
                int d=(c/2);
                ll e=(a[d]+a[d+1])/2;
                cout<<e<<endl;
            }
            c++;
        }
        return 0;
    }
