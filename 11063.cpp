#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n,k=0;
        while(cin>>n && n){
            k++;
            int a[n],f=1;
            for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
                if(a[i]<1)
                    f=0;
                if(i>0 && a[i-1]>=a[i])
                    f=0;
            }
            printf("Case #%d: ",k);
            if(f==0)
                printf("It is not a B2-Sequence.\n");
            else{
            vector<int>v;
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    v.push_back(a[i]+a[j]);
                }
            }
            sort(v.begin(),v.end());
            int c=0;
            for(int i=0;i<v.size()-1;i++){
                if(v[i]==v[i+1]){
                    c=1;
                    break;
                }
            }
            if(c==0)
                printf("It is a B2-Sequence.\n");
            else
                printf("It is not a B2-Sequence.\n");
        }
        printf("\n");
        }
        return 0;
    }
