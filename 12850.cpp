#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int t;
        cin>>t;
        for(int p=1;p<=t;p++){
            double r,t,j=0.0,m=0.0;
            cin>>r>>t;
            j=(t)/(r-1);
            m=r*j;
            printf("Case %d: %.3lf %.3lf\n",p,j+1e-7,m+1e-7);
        }
        return 0;
    }
