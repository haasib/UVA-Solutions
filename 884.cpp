#include<bits/stdc++.h>
using namespace std;
#define mx 1000001
bitset<mx>bt;
vector<int>v;
int r[mx];
void sieve()
    {
        bt[0]=bt[1]=1;
        v.push_back(2);
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<=mx;i+=2){
            if(bt[i]==0){
                v.push_back(i);
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
        for(int i=1001;i<mx;i++){
            if(bt[i]==0)
                v.push_back(i);
        }
    }
void pregen()
    {
        sieve();
        r[1]=0;
        for(int i=2;i<mx;i++){
            r[i]=r[i-1];
            int n=i,b=0;
            while(bt[n]==1){
                if(n%v[b]==0){
                    r[i]++;
                    n/=v[b];
                }
                else
                    b++;
            }
            if(bt[n]==0)r[i]++;
        }
    }
int main()
    {
        pregen();
        int n;
        while(scanf("%d",&n)!=EOF){
            printf("%d\n",r[n]);
        }
        return 0;
    }
