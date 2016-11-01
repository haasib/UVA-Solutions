#include<bits/stdc++.h>
using namespace std;
void ch(string s)
    {
        double d=0.0,c=12.01,h=1.008,o=16.00,n=14.01;
        for(int i=0;i<s.length();i++){
            if(s[i]=='C' || s[i]=='H' || s[i]=='O' || s[i]=='N'){
                int r=-1;
                int t=0;
                char ch=s[i];
                for(int j=i+1;j<s.length();j++){
                    if(s[j]>='0'&& s[j]<='9'){
                    r++;
                    if(r==1){
                        t*=10;
                        t+=(int)s[j]-'0';
                    }
                    else
                        t+=(int)s[j]-'0';
                    //i=j;
                    }
                    else
                        break;
                }
                if(t==0)t=1;
                if(ch=='C')
                    d+=((double)t)*c;
                else if(ch=='H')
                    d+=((double)t)*h;
                else if(ch=='O')
                    d+=((double)t)*o;
                else if(ch=='N')
                    d+=((double)t)*n;
            }
        }
        printf("%.3lf\n",d);

    }
int main()
    {
        int k;
        cin>>k;
        for(int p=1;p<=k;p++){
            string s;
            cin>>s;
            ch(s);
        }
        return 0;
    }
