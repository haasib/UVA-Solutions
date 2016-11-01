#include<bits/stdc++.h>
using namespace std;
#define mx 50000
int num[mx+1][3]={-1};
bitset<mx+1>bt;
void ch()
    {
        for(int i=0;i<=sqrt(mx);i++){
                for(int j=i;j<=sqrt(mx);j++){
                    for(int m=j;m<=sqrt(mx);m++){
                        int s=(i*i)+(j*j)+(m*m);
                        if(s>mx)
                            break;
                        if(bt[s]==0){
                            num[s][0]=i;
                            num[s][1]=j;
                            num[s][2]=m;
                            bt[s]=1;
                        }
                    }
                }
            }
    }
int main()
    {
        ch();
        int k;
        scanf("%d",&k);
        for(int p=1;p<=k;p++){
            int n;
            scanf("%d",&n);
            if(bt[n]==0)
                printf("-1\n");
            else
                printf("%d %d %d\n",num[n][0],num[n][1],num[n][2]);
        }
        return 0;
    }
