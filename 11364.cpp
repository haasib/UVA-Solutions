#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int tc;
        scanf("%d",&tc);
        while(tc--){
            int n;
            scanf("%d",&n);
            int a[n],m=INT_MAX,ma=-1;
            for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
                m=min(m,a[i]);
                ma=max(ma,a[i]);
            }
            //cout<<m<<" "<<ma<<endl;
            int b=ma/2;
            int res=(ma-b)*2;
            res+=(b-m)*2;
            printf("%d\n",res);
        }
        return 0;
    }
