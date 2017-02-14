#include<bits/stdc++.h>
using namespace std;
#define ll long long
int F(string s)
    {
        int t=0,tt=0;
        for(int i=0;i<s.length();i+=2)t+=s[i]-48;
        for(int i=1;i<s.length();i+=2)tt+=s[i]-48;
        return t-tt;
    }
int main()
    {
        string s;
        int flag,ff,p=0;
        while(cin>>s){
            p++;
            flag=0;
            ff=0;
            int len=s.length();
            int t=(((int)s[len-2]-48)*10)+((int)s[len-1]-48);
            if(t%4==0){
                if(!t){
                    int tt=(((int)s[len-4]-48)*1000)+(((int)s[len-3]-48)*100)+(((int)s[len-2]-48)*10)+((int)s[len-1]-48);
                    if(tt%400==0)flag=1;
                }
                else flag=1;
            }
            t=0;
            for(int i=0;i<s.length();i++)t+=s[i]-48;
            if(p>1)printf("\n");
            if(flag){
                ff=1;
                printf("This is leap year.\n");
            }
            if((s[len-1]-48==5 || s[len-1]-48==0) && t%3==0){
                ff=1;
                printf("This is huluculu festival year.\n");
            }
            if(flag && (s[len-1]-48==0 && F(s)%11==0)){
                ff=1;
                printf("This is bulukulu festival year.\n");
            }
            if(!ff)printf("This is an ordinary year.\n");
        }
        return 0;
    }
