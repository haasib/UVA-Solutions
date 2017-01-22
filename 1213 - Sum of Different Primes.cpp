#include<bits/stdc++.h>
using namespace std;
#define mx 1121
bitset<mx>bt;
int isPrime[190],e=-1;
int dp[190][18][1125],n,k;
void sieve()
    {
        bt[0]=bt[1]=1;
        isPrime[++e]=2;
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<mx;i+=2){
            if(!bt[i]){
                isPrime[++e]=i;
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
        for(int i=33;i<mx;i+=2){
            if(!bt[i])isPrime[++e]=i;
        }
    }
int F(int i,int j,int num)
    {
        if(j>=k){
            if(num==n)return 1;
            else return 0;
        }
        if(i>e)return 0;
        //if(isPrime[i]>n)return 0;
        if(dp[i][j][num]!=-1)return dp[i][j][num];
        int p=0,q=0;
        if(j+1<=k && num+isPrime[i]<=n)
            p=F(i+1,j+1,num+isPrime[i]);
        q=F(i+1,j,num);
        return dp[i][j][num]=p+q;
    }
int main()
    {
        sieve();
        //for(int i=0;i<190;i++)cout<<isPrime[i]<<" ";
        //cout<<endl;
        while(cin>>n>>k){
            if(!n && !k)break;
            memset(dp,-1,sizeof(dp));
            cout<<F(0,0,0)<<endl;
        }
        return 0;
    }
