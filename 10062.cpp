#include<bits/stdc++.h>
using namespace std;
int main()
    {
        string s;
        int k=0;
        while(getline(cin,s)){
            k++;
            int a[100],b[100];
            memset(a,0,sizeof(a));
            memset(b,0,sizeof(b));
            int d=-1,e=-1;
            for(int i=0;i<s.length();i++){
                int c=0;
                for(int j=0;j<s.length();j++){
                    if(j<i && s[i]==s[j])
                        break;
                    if(s[i]==s[j])
                        c++;
                    if(j==s.length()-1){
                        a[++d]=(int)s[i];
                        b[++e]=c;
                    }
                }
            }
            for(int i=0;i<=d;i++){
                for(int j=i+1;j<=d;j++){
                    if(b[i]>b[j]){
                        int t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                        int tt=b[i];
                        b[i]=b[j];
                        b[j]=tt;
                    }
                    if(b[i]==b[j]){
                        if(a[i]<a[j]){
                            int t=a[i];
                            a[i]=a[j];
                            a[j]=t;
                        }
                    }
                }
            }
        if(k!=1)
            cout<<endl;
            for(int i=0;i<=d;i++){
                cout<<a[i]<<" "<<b[i]<<endl;
            }
        }
        return 0;
    }
