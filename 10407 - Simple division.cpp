#include<bits/stdc++.h>
using namespace std;
int ar[1005];
int gcd(int n,int m)
    {
        if(n==0)return m;
        return gcd(m%n,n);
    }
int main()
    {
        int e;
        while(scanf("%d",&ar[0]) && ar[0]){
            e=1;
            while(scanf("%d",&ar[e]) && ar[e])e++;
            int r=0;
            for(int i=0;i<e;i++){
                for(int j=i+1;j<e;j++){
                    int t=ar[i]-ar[j];
                    (t<0)? t*=-1 : t=t;
                    (t!=0)?r=gcd(r,t) : r=r;
                }
            }
            printf("%d\n",r);
        }
        return 0;
    }
