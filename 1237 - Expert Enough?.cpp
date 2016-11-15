#include<bits/stdc++.h>
using namespace std;
int d,L[10001],H[10001],n,found=0,total=0,q;
string M[10001],ans="";
void backtrack(int i,int price)
    {
        if(total>1 || i>=d)return;
        if(price>=L[i] && price<=H[i]){
            found=1;
            total++;
            ans=M[i];
        }
        backtrack(i+1,price);
    }
int main()
    {
        int tc,counter=0;
        scanf("%d",&tc);
        while(tc--){
            counter++;
            scanf("%d",&d);
            for(int i=0;i<d;i++)cin>>M[i]>>L[i]>>H[i];
            scanf("%d",&q);
            if(counter>1)printf("\n");
            while(q--){
                found = 0;
                total = 0;
                scanf("%d",&n);
                backtrack(0,n);
                if(!found || total>1)printf("UNDETERMINED\n");
                else cout<<ans<<endl;
            }
        }
        return 0;
    }
