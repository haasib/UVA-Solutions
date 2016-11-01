#include<bits/stdc++.h>
using namespace std;
bool ch(int n)
    {
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)return false;
        }
        return true;
    }
long long int power(int a,int b)
    {
        if(b==0)return 1;
        return a*power(a,b-1);
    }
int main()
    {
        int n;
        while(cin>>n && n!=0){
            if(!ch(n))cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
            else if(n==11 || n==23 || n==29)
                cout<<"Given number is prime. But, NO perfect number is available."<<endl;
            else
                cout<<"Perfect: "<<power(2,n-1+n)-(power(2,n-1))<<"!"<<endl;
        }
        return 0;
    }
