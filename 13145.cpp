#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n;
        while(scanf("%d",&n) && n){
            getchar();
            string s;
            getline(cin,s);
            n=((n%26)+26)%26;
            for(int i=0;i<s.length();i++){
                if(s[i]>='A' && s[i]<='Z')
                    s[i]=(((int)s[i]-'A'+n)%26)+'A';
                else if(s[i]>='a' && s[i]<='z')
                    s[i]=(((int)s[i]-'a'+n)%26)+'a';
                printf("%c",s[i]);
            }
            printf("\n");
        }
        return 0;
    }
