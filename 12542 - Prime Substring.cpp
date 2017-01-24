#include<bits/stdc++.h>
using namespace std;
#define mx 100001
bitset<mx>bt;
void sieve()
    {
        bt[0]=bt[1]=1;
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<=mx;i+=2){
            if(!bt[i]){
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
    }
int main()
    {
        sieve();
        string s;
        while(cin>>s){
            if(s=="0")break;
            int r=0;
            for(int i=0;i<s.length();i++){
                int t=s[i]-48;
                if(!bt[t])r=max(r,t);
                for(int j=i+1;j<s.length();j++){
                    t*=10;
                    t+=s[j]-48;
                    if(t>=mx)break;
                    if(!bt[t])r=max(r,t);
                }
            }
            printf("%d\n",r);
        }
        return 0;
    }
