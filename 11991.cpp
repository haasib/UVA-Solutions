#include<bits/stdc++.h>
using namespace std;
int main(){

      int n,m,v,k,temp;

            while(cin>>n>>m){
                vector <int> vv[1000001];
                for(int i=1; i<=n; i++){
                    cin>> temp;
                    vv[temp].push_back(i);
                }
                for(int i=0; i<m; i++){
                    cin>>k>>v;
                    if(vv[v].size()>=k) cout << vv[v][k-1] << endl;
                    else cout << 0 << endl;
                }
            }
        return 0;
}
