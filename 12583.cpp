#include<bits/stdc++.h>
using namespace std;


int main()
    {
        int testcase,n,cnt,k;
        string s;
            cin>> testcase;

                for(int tt=1; tt<=testcase; tt++){
                    cin>> n>> k>> s;
                    vector <char> q;
                    cnt=0;
                        for(int i=0; i<n; i++){
                           /*for(int i=0; i<q.size(); i++) cout << q [i] << " ";
                           cout << endl;*/
                            if(!q.empty()){
                                for(int j=0; j<q.size(); j++){
                                    if(q[j] == s[i]){/*cout<<s[i]<<" "<<q[j]<<endl*/cnt++; break;}
                                }

                                if(q.size() == k){
                                    q.erase(q.begin());
                                }
                            }
                            q.push_back(s[i]);
                        }
                        cout << "Case " << tt << ": " << cnt << endl;
                }

    return 0;
    }
