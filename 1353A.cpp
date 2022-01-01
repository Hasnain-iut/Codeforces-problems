#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        if(n==1){
            cout<<"0"<<endl;
            continue;
        }else if(n==2){
            cout<<m<<endl;
        }else if(n==3 || n==4){
            cout<<2*m<<endl;
        }else{
            cout<<2*m<<endl;
        }
    }

    return 0;
}
