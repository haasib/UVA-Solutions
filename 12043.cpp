#include<bits/stdc++.h>
using namespace std;
int sum(int n,int a)
    {
        int s=1+n;
        for(int i=2;i<=a;i++)
            s+=(pow(n,i));
        return s;
    }
void ch(int a,int b,int k)
    {
        int c=1,d=0,e=0;
        long long s=1,ss=0;
        for(int m=a;m<=b;m++){
            s=1;c=1,e=0;
        if(m%k==0){
            int n=m;
        while(n%2==0){
            n/=2;
            e++;
        }
        if(e>0){
            c*=(e+1);
            s*=sum(2,e);
        }
        for(int i=3;i<=sqrt(n);i+=2){
            e=0;
            while(n%i==0){
                n/=i;
                e++;
            }
            if(e>=1){
                c*=(e+1);
                s*=sum(i,e);
            }
        }
        if(n>1){
            c*=2;
            s*=(1+n);
        }
        d+=c;
        ss+=s;
        }
        }
        cout<<d<<" "<<ss<<endl;
    }

int main()
    {
        int t;
        cin>>t;
        for(int p=1;p<=t;p++){
            int a,b,k;
            cin>>a>>b>>k;
            ch(a,b,k);
        }
        return 0;
    }
