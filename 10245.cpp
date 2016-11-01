#include<bits/stdc++.h>
using namespace std;
double ch(double a,double b,double c,double d)
    {
        double e=(a-c)*(a-c);
        double f=(b-d)*(b-d);
        double g=sqrt((e+f)*1.0);
        return g;
    }
int main()
    {
        int n;
        while(cin>>n && n!=0){
            double a[n],b[n];
            for(int i=0;i<n;i++)
                cin>>a[i]>>b[i];
            double d=10000.0;
            for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    double c=ch(a[i],b[i],a[j],b[j]);
                    if(c<d){
                        d=c;
                    }
                }
            }
            if(d>=10000)
                cout<<"INFINITY"<<endl;
            else
                printf("%.4lf\n",d);
        }
        return 0;
    }
