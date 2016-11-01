#include<bits/stdc++.h>
using namespace std;
#define mx 1000005
bitset<mx>bt;
int pr[mx];
void sieve()
    {
        bt[0]=bt[1]=1;
        int e=-1;
        pr[++e]=2;
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<=mx;i+=2){
            if(bt[i]==0){
                pr[++e]=i;
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
        for(int i=1001;i<mx;i+=2){
            if(bt[i]==0)pr[++e]=i;
        }
    }
int main()
    {
        sieve();
        int tc;
        scanf("%d",&tc);
        while(tc--){
            int a,b;
            scanf("%d %d",&a,&b);
            int ar[200];
            int br[200];
            memset(ar,0,sizeof(ar));
            memset(br,0,sizeof(br));
            for(int i=0;pr[i]<=b;i++){
                if(pr[i]>=a && pr[i+1]<=b){
                    int t=pr[i+1]-pr[i];
                    ar[t]++;
                    br[t]++;
                }
            }
            sort(ar,ar+200);
            if(ar[199]==ar[198])
                printf("No jumping champion\n");
            else{
                for(int i=0;i<200;i++){
                    if(br[i]==ar[199]){
                        printf("The jumping champion is %d\n",i);
                        break;
                    }
                }
            }
        }
        return 0;
    }

