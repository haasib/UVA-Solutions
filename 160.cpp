#include<bits/stdc++.h>
using namespace std;
bool pr(int a)
    {
        for(int i=2;i<=sqrt(a);i++){
            if(a%i==0){
                return false;
            }
        }
        return true;
    }
int main()
    {
        int a;
        while(cin>>a && a!=0){
            int b=0,c,e=2;
            int ar[101];
            memset(ar,0,sizeof(ar));
            printf("%3d! =",a);
            while(a/e>=1){
                b+=a/e;
                e=e*2;
            }
            if(b>0)
                ar[2]=b;
            for(int i=3;i<=a;i=i+2){
                int f=0;
                if(pr(i)){
                    int d=i;
                    while(a/d>=1){
                        f=f+a/d;
                        d=d*i;
                    }
                    if(f>0)
                        ar[i]=f;
                }

            }
            int co=0;
            for(int i=2;i<=a;i++){

                if(ar[i]>0){
                    if(co==15)
                        printf("\n%6c",' ');
                    printf("%3d",ar[i]);
                    co++;
                }
            }
            printf("\n");
        }
        return 0;
    }
