#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int tc;
        scanf("%d",&tc);
        for(int t=1;t<=tc;t++){
            int n,p,q,a,c=0,f=0,d=0;
            scanf("%d %d %d",&n,&p,&q);
            for(int i=0;i<n;i++){
                scanf("%d",&a);
                if(f==0){
                    d+=a;
                    if(d<=q)
                        c++;
                    if(d>=q || c>=p)
                        f=1;
                }
            }
            printf("Case %d: %d\n",t,c);
        }
        return 0;
    }
