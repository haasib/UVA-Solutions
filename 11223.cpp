#include<bits/stdc++.h>
using namespace std;
void ch(string s)
    {
        if(s.compare(".-")==0)
            cout<<"A";
        else if(s.compare("-...")==0)
            cout<<"B";
        else if(s.compare("-.-.")==0)
            cout<<"C";
        else if(s.compare("-..")==0)
            cout<<"D";
        else if(s.compare(".")==0)
            cout<<"E";
        else if(s.compare("..-.")==0)
            cout<<"F";
        else if(s.compare("--.")==0)
            cout<<"G";
        else if(s.compare("....")==0)
            cout<<"H";
        else if(s.compare("..")==0)
            cout<<"I";
        else if(s.compare(".---")==0)
            cout<<"J";
        else if(s.compare("-.-")==0)
            cout<<"K";
        else if(s.compare(".-..")==0)
            cout<<"L";
        else if(s.compare("--")==0)
            cout<<"M";
        else if(s.compare("-.")==0)
            cout<<"N";
        else if(s.compare("---")==0)
            cout<<"O";
        else if(s.compare(".--.")==0)
            cout<<"P";
        else if(s.compare("--.-")==0)
            cout<<"Q";
        else if(s.compare(".-.")==0)
            cout<<"R";
        else if(s.compare("...")==0)
            cout<<"S";
        else if(s.compare("-")==0)
            cout<<"T";
        else if(s.compare("..-")==0)
            cout<<"U";
        else if(s.compare("...-")==0)
            cout<<"V";
        else if(s.compare(".--")==0)
            cout<<"W";
        else if(s.compare("-..-")==0)
            cout<<"X";
        else if(s.compare("-.--")==0)
            cout<<"Y";
        else if(s.compare("--..")==0)
            cout<<"Z";
        else if(s.compare("-----")==0)
            cout<<"0";
        else if(s.compare(".----")==0)
            cout<<"1";
        else if(s.compare("..---")==0)
            cout<<"2";
        else if(s.compare("...--")==0)
            cout<<"3";
        else if(s.compare("....-")==0)
            cout<<"4";
        else if(s.compare(".....")==0)
            cout<<"5";
        else if(s.compare("-....")==0)
            cout<<"6";
        else if(s.compare("--...")==0)
            cout<<"7";
        else if(s.compare("---..")==0)
            cout<<"8";
        else if(s.compare("----.")==0)
            cout<<"9";
        else if(s.compare(".-.-.-")==0)
            cout<<".";
        else if(s.compare("--..--")==0)
            cout<<",";
        else if(s.compare("..--..")==0)
            cout<<"?";
        else if(s.compare(".----.")==0)
            cout<<"'";
        else if(s.compare("-.-.--")==0)
            cout<<"!";
        else if(s.compare("-..-.")==0)
            cout<<"/";
        else if(s.compare("-.--.")==0)
            cout<<"(";
        else if(s.compare("-.--.-")==0)
            cout<<")";
        else if(s.compare(".-...")==0)
            cout<<"&";
        else if(s.compare("---...")==0)
            cout<<":";
        else if(s.compare("-.-.-.")==0)
            cout<<";";
        else if(s.compare("-...-")==0)
            cout<<"=";
        else if(s.compare(".-.-.")==0)
            cout<<"+";
        else if(s.compare("-....-")==0)
            cout<<"-";
        else if(s.compare("..--.-")==0)
            cout<<"_";
        else if(s.compare(".-..-.")==0)
            cout<<"\"";
        else if(s.compare(".--.-.")==0)
            cout<<"@";
    }
int main()
    {
        int k;
        cin>>k;
        getchar();
        for(int p=1;p<=k;p++){
            string s;
            getline(cin,s);
            //cout<<s<<endl;
            string m="";
            cout<<"Message #"<<p<<endl;
            for(int i=0;i<s.length();i++){
                if(s[i]==' ' || i==s.length()){
                    ch(m);
                    m="";
                }
                else
                    m+=s[i];
                if(i<s.length()-1 && (s[i]==' ' && s[i+1]==' ')){
                    cout<<" ";
                    i++;
                }
            }
            if(!m.empty())
                ch(m);
            cout<<endl;
            if(p!=k)
                cout<<endl;
        }
        return 0;
    }
