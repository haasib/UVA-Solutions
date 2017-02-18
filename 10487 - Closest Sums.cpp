#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int ar[1005];
int main()
    {
        int n,a,c=0;
        while(scanf("%d",&n) && n){
            c++;
            v.clear();
            for(int i=0;i<n;i++)scanf("%d",&ar[i]);
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++)v.push_back(ar[i]+ar[j]);
            }
            sort(v.begin(),v.end());
            scanf("%d",&n);
            printf("Case %d:\n",c);
            while(n--){
                scanf("%d",&a);
                int p=lower_bound(v.begin(),v.end(),a)-v.begin();
                printf("Closest sum to %d is ",a);
                if(v[p]==a)printf("%d",v[p]);
                else if(p==0){
                    int t=v[p]-a,tt=INT_MAX,r=INT_MAX,ans;
                    t-=a;
                    if(t<0)t*=a;
                    if(t<r){
                        r=t;
                        ans=v[p];
                    }
                    if(p+1<v.size()){
                        tt=v[p+1];
                        tt-=a;
                        if(tt<0)tt*=-1;
                        if(tt<r){
                            r=tt;
                            ans=v[p+1];
                        }
                    }
                    printf("%d",ans);
                }
                else{
                    int r=INT_MAX,ans;
                    int t=v[p-1]-a,tt=INT_MAX,ttt=v[p]-a;
                    if(p+1<v.size()){
                        tt=v[p+1];
                        tt-=a;
                        if(tt<0)tt*=-1;
                        if(tt<r){
                            r=tt;
                            ans=v[p+1];
                        }
                    }
                    if(ttt<0)ttt*=-1;
                    if(ttt<r){
                        r=ttt;
                        ans=v[p];
                    }
                    if(t<0)t*=-1;
                    if(t<r){
                        r=t;
                        ans=v[p-1];
                    }
                    printf("%d",ans);
                }
                printf(".\n");
            }
        }
        return 0;
    }
