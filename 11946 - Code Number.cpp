#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int tc;
        char s[100];
        scanf("%d",&tc);
        getchar();
        for(int p=0;p<tc;p++){
            while(gets(s)!='\0'){
            if(strlen(s)==0)break;
            for(int i=0;i<strlen(s);i++){
                if(s[i]>=48 && s[i]<=57){
                    if(s[i]=='0')printf("O");
                    else if(s[i]=='1')printf("I");
                    else if(s[i]=='2')printf("Z");
                    else if(s[i]=='3')printf("E");
                    else if(s[i]=='4')printf("A");
                    else if(s[i]=='5')printf("S");
                    else if(s[i]=='6')printf("G");
                    else if(s[i]=='7')printf("T");
                    else if(s[i]=='8')printf("B");
                    else if(s[i]=='9')printf("P");
                }
                else printf("%c",s[i]);
            }
            printf("\n");
            }
            if(p!=tc-1)printf("\n");
        }
        return 0;
    }
