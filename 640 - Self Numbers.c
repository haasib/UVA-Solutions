#include<stdio.h>
#define mx 1000001
int ar[1000005],i;
int dSum(int n)
    {
        int sum=n;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
int main()
    {
        for(i=1;i<mx;i++){
                ar[dSum(i)]=1;
        }
        for(i=1;i<mx;i++){
            if(!ar[i])printf("%d\n",i);
        }
        return 0;
    }
