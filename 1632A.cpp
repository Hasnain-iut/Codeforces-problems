#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n>=3){
            cout<<"NO"<<endl;
        }else{
            if(s=="11" || s=="00"){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }

    }
}
