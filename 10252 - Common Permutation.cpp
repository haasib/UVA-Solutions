#include<bits/stdc++.h>
using namespace std;
int main() {
    string a,b;
    while(getline(cin, a) && getline(cin, b)) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0, j = 0;
        while(i<a.length() && j<b.length()) {
            if(a[i] == b[j]) {
                printf("%c", a[i]);
                i++, j++;
            } else {
                if(a[i] > b[j]) j++;
                else i++;
            }
        }
        printf("\n");
    }
    return 0;
}
