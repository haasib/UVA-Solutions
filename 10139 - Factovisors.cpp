#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool poss(ll n,ll pr,ll c)
    {
        ll p=pr;
        while(n/p && c>0){
            c-=n/p;
            p*=pr;
            //cout<<c<<endl;
        }
        return c<=0;
    }
bool ch(ll n,ll num)
    {
        if(n==0)return true;
        ll b=0,e=2;
        while(n%2==0){
            n/=2;
            b++;
        }
        //cout<<poss(num,2,b)?cout<<"YY"<<endl : cout<<"NNN"<<endl;
        if(!poss(num,2,b))return false;
        for(int i=3;i*i<=n;i++){
            b=0;
            while(n%i==0){
                n/=i;
                b++;
            }
            if(!poss(num,i,b))return false;
        }
        if(n>1 && !poss(num,n,1))return false;
        return true;
    }
int main()
    {
        ll n,m;
        while(cin>>n>>m){
            (ch(m,n))?printf("%lld divides %lld!\n",m,n) : printf("%lld does not divide %lld!\n",m,n);
        }
        return 0;
    }
