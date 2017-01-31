#include<bits/stdc++.h>
using namespace std;
#define ll long long
int F(int n)
    {
        int r=1,c=1;
        while(r%n!=0){
            r*=10;
            r++;
            c++;
            r%=n;
        }
        return c;
    }
int main()
    {
        int n;
        while(cin>>n){
            printf("%d\n",F(n));
        }
        return 0;
    }
