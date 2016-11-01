#include<bits/stdc++.h>
using namespace std;
int main()
    {
        double a,b,c;
        double per,rad,incrc,crc,rec;
        while(scanf("%lf %lf %lf",&a,&b,&c)==3){
            per=(a+b+c)/2;
            rec=sqrt(per*(per-a)*(per-b)*(per-c));
            rad=rec/per;
            incrc=rad*rad*atan(1)*4;
            rad=(a*b*c)/(4*rec);
            crc=(rad*rad*4*atan(1))-rec;
            rec-=incrc;
            printf("%.4lf %.4lf %.4lf\n",crc,rec,incrc);
        }
        return 0;
    }
