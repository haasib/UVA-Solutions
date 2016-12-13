#include<bits/stdc++.h>
using namespace std;
map<char,char>mp;
void Set()
    {
        mp['A']='A';
        mp['E']='3';
        mp['H']='H';
        mp['I']='I';
        mp['J']='L';
        mp['L']='J';
        mp['M']='M';
        mp['O']='O';
        mp['S']='2';
        mp['T']='T';
        mp['U']='U';
        mp['V']='V';
        mp['W']='W';
        mp['X']='X';
        mp['Y']='Y';
        mp['Z']='5';
        mp['1']='1';
        mp['2']='S';
        mp['3']='E';
        mp['5']='Z';
        mp['8']='8';
    }
int main()
    {
        Set();
        string s;
        while(cin>>s){
            string n="",m="";
            for(int i=s.length()-1;i>=0;i--){
                n+=s[i];
                m+=mp[s[i]];
            }
            //cout<<m<<" "<<n<<endl;
            if(s==n && s==m)cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
            else if(s==n && s!=m) cout<<s<<" -- is a regular palindrome."<<endl<<endl;
            else if(s!=n && s==m)cout<<s<<" -- is a mirrored string."<<endl<<endl;
            else cout<<s<<" -- is not a palindrome."<<endl<<endl;
        }
        return 0;
    }
