#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int k = (s[0] - 'a') * 25 + (s[1]-'a'+1);

        if(s[1] > s[0]){
            k--;
        }

        cout<<k<<endl;
    }
}
