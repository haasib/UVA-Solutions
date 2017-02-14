#include<bits/stdc++.h>
using namespace std;
#define mx 1000001
bitset<mx>bt;
int prime[78500],e=-1;
vector<int>v;
void sieve()
    {
        bt[0]=bt[1]=1;
        prime[++e]=2;
        for(int i=4;i<mx;i+=2)bt[i]=1;
        for(int i=3;i*i<=mx;i+=2){
            if(!bt[i]){
                prime[++e]=i;
                for(int j=i*i;j<mx;j+=i)bt[j]=1;
            }
        }
        for(int i=1001;i<mx;i+=2){
            if(!bt[i])prime[++e]=i;
        }
        //cout<<e<<endl;
    }
int F(int n)
    {
        int r=1,i=0,f=0;
        while(i<=e && prime[i]*prime[i]<=n){
            f=0;
            while(n%prime[i]==0){
                n/=prime[i];
                f++;
            }
            if(f>0)r*=(f+1);
            i++;
        }
        if(n>1)r*=2;
        return r;
    }
/*int BS(int n)
    {
        int B=0,E=v.size()-1,M;
        while(B<E){
            M=(B+E)/2;
            if(v[M]==n)return M;
            if(n<v[M])E=M-1;
            else B=M+1;
        }
        return M;
    }*/
int main()
    {
        sieve();
        v.push_back(1);
        for(int i=1;i<mx;i++){
            v.push_back(v[i-1]+F(v[i-1]));
        }
        //cout<<F(100)<<" "<<F(1)<<endl;
        //sort(v.begin(),v.end());
        //cout<<v.size()<<" "<<v[v.size()-1]<<endl;
        //for(int i=0;i<=100;i++)cout<<v[i]<<" ";
        //cout<<endl;
        int tc,a,b,c=0;
        scanf("%d",&tc);
        while(tc--){
            c++;
            scanf("%d %d",&a,&b);
            int p=upper_bound(v.begin(),v.end(),b)-v.begin();
            int q=lower_bound(v.begin(),v.end(),a)-v.begin();
            printf("Case %d: %d\n",c,p-q);
        }
        return 0;
    }
