#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int k;
        cin>>k;
        for(int p=1;p<=k;p++){
            int n;
            cin>>n;
            double d=0.0;
            for(int i=1;i<=n;i++){
                d+=log10(i);
            }
            int m=(int)floor(d);
            cout<<m+1<<endl;
        }
        return 0;
    }
