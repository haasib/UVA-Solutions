#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n;
        scanf("%d",&n);
        string s[n];
        //getchar();
        int d[n],m[n],y[n];
        for(int i=0;i<n;i++){
            getchar();
            cin>>s[i]>>d[i]>>m[i]>>y[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(y[i]>y[j]){
                    int t=y[i];
                    y[i]=y[j];
                    y[j]=t;
                    t=m[i];
                    m[i]=m[j];
                    m[j]=t;
                    t=d[i];
                    d[i]=d[j];
                    d[j]=t;
                    string tt=s[i];
                    s[i]=s[j];
                    s[j]=tt;
                }
                else if(y[i]==y[j]){
                    if(m[i]>m[j]){
                    int t=m[i];
                    m[i]=m[j];
                    m[j]=t;
                    t=d[i];
                    d[i]=d[j];
                    d[j]=t;
                    string tt=s[i];
                    s[i]=s[j];
                    s[j]=tt;
                    }
                    else if(m[i]==m[j]){
                        if(d[i]>d[j]){
                            int t=d[i];
                            d[i]=d[j];
                            d[j]=t;
                            string tt=s[i];
                            s[i]=s[j];
                            s[j]=tt;
                        }
                    }
                }
            }
        }
        cout<<s[n-1]<<endl<<s[0]<<endl;
        return 0;
    }
