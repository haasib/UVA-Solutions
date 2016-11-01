#include<iostream>
#include<cmath>
using namespace std;
#define n 32769
int a[n]={0};
void sieve()
    {
        a[0]=a[1]=1;
        for(int i=4;i<n;i+=2)a[i]=1;
        for(int i=3;i<=sqrt(n);i+=2){
            if(a[i]==0){
                for(int j=i*i;j<n;j+=i)a[j]=1;
            }
        }
    }
int main()
    {
        sieve();
        int k;
        while(cin>>k && k!=0){
            int c=0;
            for(int i=2;i<=k/2;i++){
                if(a[i]==0){
                for(int j=i;j<=k;j++){
                    if(a[j]==0 && i+j==k){
                        c++;
                    }
                }
                }
            }
        cout<<c<<endl;
        }
        return 0;
    }
