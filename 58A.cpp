#include<iostream>
using namespace std;
int main(){
    string s;
    string a = "hello";
    int b=0, c=0;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]==a[c]){
            b++;
            c++;
            if(b == 5){
                break;
            }
        }
    }
    if(b==5){
        cout<<"YES";
    }else{
       cout<<"NO";
    }
    return 0;
}
