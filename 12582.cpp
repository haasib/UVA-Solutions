#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc;
        cin>> tc;
            for(int tt=1; tt<=tc; tt++){
                string s;
                    cin>> s;
                    long int len=s.length();
                    int cnt[93];
                    memset (cnt,0,sizeof(cnt));
                    stack <char> st;
                        st.push(s[0]);//cnt[(int)s[0]]=2;
                        for(int i=1; i<len; i++){
                            if(cnt[(int)s[i]] == 0)cnt[(int)s[i]]=1;
                            char s_top = st.top();
                            if(s[i] == s_top) {
                               st.pop();
                               if(!st.empty()){s_top = st.top();
                               cnt[(int)s_top]++;
                               }
                            }
                            else st.push(s[i]);

                        }
                cout << "Case " << tt << endl;
                for(int i=65; i<91; i++){
                       if(cnt[i]!=0) cout << (char) i << " = " << cnt[i] << endl;
                }
            }
return 0;
}
