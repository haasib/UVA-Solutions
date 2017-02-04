#include<bits/stdc++.h>
using namespace std;
#define mx 32001
bitset<mx>bt;
int prime[mx],e=-1;
vector<int>v[200];
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
        for(int i=179;i<mx;i+=2){
            if(!bt[i])prime[++e]=i;
        }
        //cout<<e<<endl;
    }
void F(int a,int b)
    {
        int i=0,p=-1;
        //cout<<"DD " <<b<<" "<<prime[i]<<endl;
        while(i<=e && prime[i]<=b){
            //cout<<"HJ"<<endl;
            //v.clear();
            //c=0;
            if(a>prime[i]){i++;continue;}
            if( (prime[i+1]-prime[i]==prime[i+2]-prime[i+1]) && prime[i+1]<=b && prime[i+2]<=b){
                //c=1;
                int t=prime[i+1]-prime[i];
                //printf("%d %d %d",prime[i],prime[i+1],prime[i+2]);
                p++;
                v[p].push_back(prime[i]);
                v[p].push_back(prime[i+1]);
                v[p].push_back(prime[i+2]);
                i+=2;
                while(prime[i+1]-prime[i]==t){
                    //printf(" %d",prime[i+1]);
                    v[p].push_back(prime[i+1]);
                    /*if(prime[i+1]>b){
                        c=0;
                        break;
                    }*/
                    i++;
                }
                /*if(c){
                    printf("%d",v[0]);
                    for(int j=1;j<v.size();j++)printf(" %d",v[j]);
                    printf("\n");
                }*/
            }
            else i++;
        }
        //cout<<p<<endl;
    }
int main()
    {
        sieve();
        //cout<<prime[0]<<" "<<prime[1]<<" "<<prime[e]<<endl;
        int a,b,c,d;
        F(0,32000);
        while(scanf("%d %d",&c,&d)){
            if(!c && !d)break;
            a=min(c,d);
            b=max(c,d);
            for(int i=0;i<162;i++){
                int x=v[i].size()-1;
                int t=v[i][0];
                int tt=v[i][x];
                if(t>=a && tt<=b){
                    printf("%d",v[i][0]);
                    for(int j=1;j<=x;j++)printf(" %d",v[i][j]);
                    printf("\n");
                }
            }
        }
        return 0;
    }
