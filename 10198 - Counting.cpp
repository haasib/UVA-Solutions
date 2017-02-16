#include<bits/stdc++.h>
using namespace std;
int e,f;
string dp[1005];
char p[1000],q[1000];
string F(char ar[],char br[])
    {
        string sum="";
       int i=0,j=0,counter=0;
       //p=0;
       while(i<=e && j<=f){
            int temp=((int)ar[i]-48)+((int)br[j]-48)+counter;
            if(i==e && j==f){
                if(temp>9){ // If two numbers are of same length and last have a counter
                        sum+=(char)temp-10+48;
                        sum+=(char)49;
                    }
                    else sum+=(char)temp+48;
            }
            else if(temp>9){
                sum+=(char)temp-10+48;
                counter=1;
            }
            else{
                sum+=(char)temp+48;
                counter=0;
            }
            i++;
            j++;
            //p++;
       }
       if(i<=e){ // If the second number is short
                while(i<=e){
                    int temp=((int)ar[i]-48)+counter;
                    if(i==e){
                        if(temp>9){
                            sum+=(char)temp-10+48;
                            sum+=(char)49;
                        }
                        else sum+=(char)temp+48;
                    }
                    else if(temp>9){
                        sum+=(char)temp-10+48;
                        counter=1;
                    }
                    else{
                        sum+=(char)temp+48;
                        counter=0;
                    }
                    i++;
                    //p++;
                }
            }
        else if(j<=f){ // If 1st Number is short
                while(j<=f){
                    int temp=((int)br[j]-48)+counter;
                    if(f==j){
                        if(temp>9){
                            sum+=(char)temp-10+48;
                            sum+=(char)49;
                        }
                        else sum+=(char)temp+48;
                    }
                    else if(temp>9){
                        sum+=(char)temp-10+48;
                        counter=1;
                    }
                    else{
                        sum+=(char)temp+48;
                        counter=0;
                    }
                    j++;
                    //p++;
                }
            }
            string ss="";
            for(int i=sum.length()-1;i>=0;i--)ss+=sum[i];
            return ss;
    }
int main()
    {
        string s,ss,m,mm;
        dp[0]="1";
        dp[1]="2";
        dp[2]="5";
        dp[3]="13";
        for(int i=4;i<=1000;i++){
            s=dp[i-1];
            ss=dp[i-2];
            m=dp[i-3];
            mm=dp[i-1];
            e=-1;
            f=-1;
            for(int i=s.length()-1;i>=0;i--)p[++e]=s[i];
            for(int i=ss.length()-1;i>=0;i--)q[++f]=ss[i];
            s=F(p,q);
            e=-1;f=-1;
            for(int i=mm.length()-1;i>=0;i--)p[++e]=mm[i];
            for(int i=m.length()-1;i>=0;i--)q[++f]=m[i];
            m=F(p,q);
            e=-1;
            f=-1;
            for(int i=s.length()-1;i>=0;i--)p[++e]=s[i];
            for(int i=m.length()-1;i>=0;i--)q[++f]=m[i];
            s=F(p,q);
            dp[i]=s;
        }
        int a;
        while(cin>>a){

           //cout<<p<< " "<<q<<endl;
            cout<<dp[a]<<endl;
        }
        return 0;
    }
