#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int tc;
        scanf("%d",&tc);
        while(tc--){
            int n;
            scanf("%d",&n);
            int a[n][n];
            int m=sqrt(n);
            int b[n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    scanf("%d",&a[i][j]);
                }
            }
            int d=0;
            for(int i=0;i<n;i+=m){
                int c=-1;
                for(int j=i;j<i+m;j++){
                    for(int k=i;k<i+m;k++){
                        b[++c]=a[j][k];
                    }
                }
                sort(b,b+c+1);
                for(int j=0;j<c;j++){
                    if(b[j]==b[j+1]){
                        d=1;
                        break;
                    }
                }
                if(d==1)
                    break;
            }
            if(!d){
                for(int i=0;i<n;i++){
                    map<int,int>mp;
                    for(int j=0;j<n;j++){
                        if(mp[a[i][j]]==0){
                            mp[a[i][j]]=1;
                        }
                        else{
                            d=1;
                            break;
                        }
                    }
                    if(d==1)
                        break;
                }
            }
            if(!d){
                for(int i=0;i<n;i++){
                    map<int,int>mp;
                    for(int j=0;j<n;j++){
                        if(mp[a[j][i]]==0){
                            mp[a[j][i]]=1;
                        }
                        else{
                            d=1;
                            break;
                        }
                    }
                    if(d==1)
                        break;
                }
            }
            if(!d)
                printf("yes\n");
            else
                printf("no\n");
        }
        return 0;
    }
