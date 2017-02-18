#include<bits/stdc++.h>
using namespace std;
int ar[100005];
bool pr(int n)
    {
        if(n%2==0)return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0)return false;
        }
        return true;
    }
void pregen()
    {
        ar[0]=0;
        for(int i=0;i<=10000;i++){
            ar[i+1]=ar[i];
            if(pr((i*i)+i+41))
                ar[i+1]++;
        }
    }
int main()
    {
        //memset(ar,0,sizeof(ar));
        pregen();
        //for(int i=0;i<=10000;i++)cout<<i<<" "<<ar[i]<<endl;
        int a,b,n,t;
        while(scanf("%d %d",&a,&b)==2){
            n=b-a+1;
            t=ar[b+1]-ar[a];
            //cout<<n<<" "<<t<<endl;
            double d=(double)t/(double)n;
            printf("%.2lf\n",d*100.00+1e-6);
        }
        return 0;
    }
