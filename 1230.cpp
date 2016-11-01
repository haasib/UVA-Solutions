#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bm( ll num,ll pow,ll m )
{
    if ( pow == 0 )return 1;

    if ( pow % 2 )
    {
        return ( ( num % m ) * ( bm ( num, pow - 1, m ) ) ) % m;
    }
    else
    {
        long long ret = bm( num, pow / 2, m );
        return ( (ret%m) * (ret%m) ) % m;
    }
}
int main()
    {
        int k;
        while(cin>>k && k!=0){
            for(int i=1;i<=k;i++){
                ll x,y,z;
                cin>>x>>y>>z;
                cout<<bm(x,y,z)<<endl;
            }
        }
        return 0;
    }
