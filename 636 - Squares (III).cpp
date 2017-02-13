#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ar[15];
bool F(int len,int base)
    {
        ll r=0;
        for(int i=0;i<len;i++){
            r*=(ll)base;
            r+=ar[i];
        }
        ll p=sqrt(r+.00001);
        return p*p==r;
    }
int main()
    {
        string s;
        int m,len;
        while(cin>>s){
            if(s=="0")break;
            m=0;
            len=s.length();
            for(int i=0;i<s.length();i++){
                ar[i]=(int)s[i]-48;
                m=max(m,ar[i]);
            }
            for(int i=m+1;i<100;i++){
                if(F(len,i)){
                    printf("%d\n",i);
                    break;
                }
            }
        }
        return 0;
    }
