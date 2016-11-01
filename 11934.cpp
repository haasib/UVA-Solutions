#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
    {
        int a,b,c,d,L;
        while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&L)){
            if(a==0 && b==0 && c==0 && d==0 && L==0)
                break;
            int co=0;

            for(int i=0;i<=L;i++){
                ll r=(a*i*i)+(b*i)+c;
                if(r%d==0)
                    co++;
            }
            printf("%d\n",co);
        }
        return 0;
    }
