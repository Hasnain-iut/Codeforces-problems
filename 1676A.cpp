#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int half = 0;
        for(int i=0;i<3;i++){
            half+=s[i] - '0';
        }

        int full = 0;
        for(int i=3;i<6;i++){
            full+=s[i] - '0';
        }

        if(half == full){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
