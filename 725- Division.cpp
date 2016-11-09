#include<bits/stdc++.h>
using namespace std;
int ar[10],visit[10],n,found = 0;
void backtrack(int i,int num)
    {
        //printf("N = %d\n",n);
        if(num*n>99999)return;
        if(i==5 && num*n<100000){
            //cout<<num*n<<" / "<<num<<" = "<<n<<endl;
            int br[10];
            memset(br,0,sizeof(br));
            for(int j=0;j<5;j++)br[ar[j]]++;//cout<<ar[j];}
           // cout<<endl<<num<<endl;;
            int s=num*n;
            //cout<<"SS "<<s<<endl;
            int e=s%10;
            s/=10;
            int d=s%10;
            s/=10;
            int c=s%10;
            s/=10;
            int b=s%10;
            s/=10;
            int a=s%10;
            br[a]++;
            br[b]++;
            br[c]++;
            br[d]++;
            br[e]++;
            for(int j=0;j<10;j++){
                if(br[j]!=1)return;
            }
            printf("%d%d%d%d%d / %d%d%d%d%d = %d\n",a,b,c,d,e,ar[0],ar[1],ar[2],ar[3],ar[4],n);
            found=1;
            return;
        }
        for(int j=0;j<10;j++){
            if(!visit[j]){
                ar[i]=j;
                visit[j]=1;
                backtrack(i+1,(num*10)+j);
                visit[j]=0;
            }
        }
    }
int main()
    {
        int p=0;
        while(scanf("%d",&n) && n){
            p++;
        if(p>1)printf("\n");
            found =0;
            for(int k=0;k<5;k++){
                ar[0]=k;
                visit[k]=1;
                backtrack(1,k);
                visit[k]=0;
            }
            if(!found)printf("There are no solutions for %d.\n",n);
        }
        return 0;
    }

