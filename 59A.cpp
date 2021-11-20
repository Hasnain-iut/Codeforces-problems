#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){

    string s;
    cin>>s;

    int upper=0;
    int lower=0;
    int i=0;
    for(i=0; i<s.size(); i++){
        if(isupper(s[i])){
            upper+=1;
        }else{
            lower+=1;
        }
    }

    for(int j=0; j<=s.size(); j++){
        if(upper>lower){
           s[j] = toupper(s[j]);
        }else if(upper<=lower){
           s[j] = tolower(s[j]);
        }
    }
    cout<<s;
    return 0;
}
