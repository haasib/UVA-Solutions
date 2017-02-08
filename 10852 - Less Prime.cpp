#include<bits/stdc++.h>
using namespace std;
#define mx 10001
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
        int tc,n;
        scanf("%d",&tc);
        while(tc--){
            scanf("%d",&n);
            for(int i=(n/2)+1;i<=n;i++){
                if(!bt[i]){
                    printf("%d\n",i);
                    break;
                }
            }
        }
        return 0;
    }
