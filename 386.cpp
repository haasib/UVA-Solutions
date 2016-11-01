#include<bits/stdc++.h>
using namespace std;
int main()
    {
        for(int i=6;i<=200;i++){
            int t=i*i*i;
            for(int a=2;a<i;a++){
                int tt=a*a*a;
                if(tt>t)
                    break;
                for(int b=a;b<i;b++){
                    int t1=(b*b*b);
                    if(t1+tt>t){
                        break;
                    }
                    for(int c=b;c<i;c++){
                        int ttt=(c*c*c);
                        if(tt+t1+ttt>t)
                            break;
                        if(tt+ttt+t1==t)
                            printf("Cube = %d, Triple = (%d,%d,%d)\n",i,a,b,c);
                    }
                }
            }
        }
        return 0;
    }
