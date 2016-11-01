#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n;
        while(scanf("%d",&n) && n){
            double a[n];
            double d=0.0;
            for(int i=0;i<n;i++){
                scanf("%lf",&a[i]);
                d+=a[i];
            }
            d/=(n*1.0);
            double r=0.0,pos=0.0,neg=0.0;
            for(int i=0;i<n;i++){
                    double dif =(double) (long) ((a[i]-d) * 100.0) / 100.0;
                    if(dif>0)pos+=dif;
                    else
                        neg+=dif;
            }
            if(pos>(neg)*-1)
                r=pos;
            else{
                if(neg>=0)
                    r=neg;
                else
                    r=neg*-1;
            }
            printf("$%.2lf\n",r);
        }
        return 0;
    }
