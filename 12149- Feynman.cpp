#include<iostream>
using namespace std;
int main()
    {
        int a;
        while(cin>>a){
            if(a==0)
                break;
            int c=0;
            for(int i=1;i<=a;i++)
                c=c+(i*i);
            cout<<c<<endl;
        }
        return 0;
    }
