#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[81];
void pregen()
    {
        ar[1]=1;
        ar[2]=2;
        for(int i=3;i<81;i++)ar[i]=ar[i-1]+ar[i-2];
    }
int main()
    {
        pregen();
        int n;
        while(scanf("%d",&n) && n){
            printf("%lld\n",ar[n]);
        }
        return 0;
    }
