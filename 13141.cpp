#include<bits/stdc++.h>
using namespace std;


int main(){

    long long int arr[87];
    arr[0]=0;arr[1]=1;
        for(int i=2; i<=85; i++){
            arr[i] = arr[i-1]+arr[i-2];
        }
        int n;
        while(cin>>n && n){
            cout << arr[n] << endl;
        }
return 0;
}
