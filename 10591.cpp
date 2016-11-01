#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum(ll n)
    {
        ll s=0,r;
        while(n!=0){
            r=n%10;
            s+=(r*r);
            n/=10;
        }
        return s;
    }
int main()
    {
        int k;
        scanf("%d",&k);
        for(int p=1;p<=k;p++){
            ll n;
            scanf("%lld",&n);
            ll m=n;
            printf("Case #%d: ",p);
            if(n==0)
                printf("0 is an Unhappy number.\n");
            else if(n==1)
                printf("1 is a Happy number.\n");
            else{
            while(n!=1){
                //cout<<sum(n)<<endl;
                n=sum(n);
                if(n<=9)
                    break;
            }
            if(n==1 || n==7)
                printf("%lld is a Happy number.\n",m);
            else
                printf("%lld is an Unhappy number.\n",m);
            }
        }
        return 0;
    }
