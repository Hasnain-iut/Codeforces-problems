#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;

    bool space = true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(!space){
                cout<<" ";
            }
        }else{
            space = false;
            cout<<s[i];
        }
    }

    return 0;
}
