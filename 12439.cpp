#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
void pre()
    {
        mp["January"]=1;
        mp["February"]=2;
        mp["March"]=3;
        mp["April"]=4;
        mp["May"]=5;
        mp["June"]=6;
        mp["July"]=7;
        mp["August"]=8;
        mp["September"]=9;
        mp["October"]=10;
        mp["November"]=11;
        mp["December"]=12;
    }
int main()
    {
        pre();
        int tc;
        scanf("%d",&tc);
        for(int p=1;p<=tc;p++){
            int d,y,d1,y1;
            string m,m1;
            char ch;
            cin>>m>>d>>ch>>y;
            cin>>m1>>d1>>ch>>y1;
            int a=mp[m];
            int b=mp[m1];
            if(a>2)y++;
            if(b<2 || (b==2 && d1<29))y1--;
            int f=(y1/4)-((y-1)/4);
            int h=(y1/100)-((y-1)/100);
            int fh=(y1/400)-((y-1)/400);
            int res=(f+fh)-h;
            printf("Case %d: %d\n",p,res);
        }
        return 0;
    }
