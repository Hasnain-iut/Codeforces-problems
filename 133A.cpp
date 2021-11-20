#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    for(int i=0;i<=s.length();i++){
        int c =s[i];
        if(c==72 || c==81 || c==57 ){
            cout<<"YES";
            break;
        }
        else if(i==s.length()){
            cout<<"NO";
            break;
        }
    }
    return 0;
}
