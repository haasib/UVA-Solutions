#include<bits/stdc++.h>
using namespace std;
#define n 20000001
int a[n]={0};
int p[n]={0};
map<int,int>mp;
void sieve()
    {
        a[0]=a[1]=1;
        int e=-1;
        p[++e]=2;
        for(int i=4;i<n;i+=2)a[i]=1;
        for(int i=3;i*i<=n;i+=2){
            if(a[i]==0){
                p[++e]=i;
                for(int j=i*i;j<n;j+=i)a[j]=1;
            }
        }
        for(int i=4473;i<n;i+=2){
            if(a[i]==0)p[++e]=i;
        }
        int c=0;
        for(int i=0;i<=e;i++){
            if(p[i]==p[i+1]-2){
                mp[++c]=p[i];
            }
        }
    }
int main()
    {
        sieve();
        int m;
        while(cin>>m){
            cout<<"("<<mp[m]<<", "<<mp[m]+2<<")"<<endl;
        }
        return 0;
    }
