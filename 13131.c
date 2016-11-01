#include <stdio.h>
int main()
    {
        int k,p,i;
        long long int a,b,s;
        scanf("%d",&k);
        for(p=1;p<=k;p++){
            s=0;
            scanf("%lld %lld",&a,&b);
            for(i=1;i*i<=a;i++){
                if(i*i==a & i%b!=0)
                    s+=i;
                else if(a%i==0){
                    if(i%b!=0)
                        s+=i;
                    if((a/i)%b!=0)
                        s+=(a/i);
                }
            }
            printf("%lld\n",s);
        }
        return 0;
    }
