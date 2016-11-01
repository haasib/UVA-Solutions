#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int k;
        scanf("%d",&k);
        for(int p=1;p<=k;p++){
            int a,b=0;
            string s;
            scanf("%d",&a);
            getline(cin,s);
            if(s.length()>3)
                b=(int)s[3]-'0';
            cout << "Case " << p << ": " << a * 0.5 + b * 0.05 << endl;
        }
        return 0;
    }
