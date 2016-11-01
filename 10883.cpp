#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int k;
        scanf("%d",&k);
        for(int p=1;p<=k;p++){
            int n;
            scanf("%d",&n);
            double d;
            vector<double>v;
            for(int i=0;i<n;i++){
                scanf("%lf",&d);
                v.push_back(d);
            }
            while(v.size()>1){
                int t=v.size()-1;
                for(int i=0;i<v.size()-1;i++){
                    v[i]=(v[i]+v[i+1])/2.0;
                }
                v.erase(v.begin()+t);
            }
            printf("Case #%d: %.3lf\n",p,v[0]);
        }
        return 0;
    }
