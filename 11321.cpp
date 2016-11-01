#include<bits/stdc++.h>
using namespace std;
int m,a;
int ar[10001];
bool ch(int a,int b)
    {
        if(a%m!=b%m)return a%m < b%m;
        if(a%2!=0){
            if(b%2!=0)return a>b;
            return true;
        }
        if(b%2!=0)
            return false;
        return a<b;
    }
int main()
    {
        int n;
        while(scanf("%d %d",&n,&m)==2){
            if(!n && !m){
                printf("0 0\n");
                break;
            }
            for(int i=0;i<n;i++){
                scanf("%d",&ar[i]);
            }
            sort(ar,ar+n,ch);
            printf("%d %d\n",n,m);
            for(int i=0;i<n;i++)
                printf("%d\n",ar[i]);
        }
        return 0;
    }
