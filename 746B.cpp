#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(n%2!=0){
        for(int i = n-2;i>0;i-=2){
            cout<<s[i];
        }
        cout<<s[0];

        for(int i=2;i<n;i+=2){

            cout<<s[i];
        }
    }else{
        for(int i = n-2;i>=0;i-=2){
            cout<<s[i];
        }

        for(int i=1;i<n;i+=2){
            cout<<s[i];
        }
    }
}
