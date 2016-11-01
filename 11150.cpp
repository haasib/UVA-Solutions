
#include<bits/stdc++.h>
using namespace std;
int re(int n)
    {
        if(n==2)return 3;
        int c=0,d=n,e=0;
        while(n>=3){
            int a=n/3;
            int b=n%3;
            n=a+b;
            if(n==2)n+=1;
            c+=a;
        }
        return c+d;
    }
int main()
    {
        int n;
        while(cin>>n){
            cout<<re(n)<<endl;
        }
        return 0;
    }
