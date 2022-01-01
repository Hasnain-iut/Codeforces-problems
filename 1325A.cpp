#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b;
        if(n==2){
            cout<<"1 1"<<endl;
            continue;
        }
        a=1;
        b=n-a;
        cout<<a<<b<<endl;
    }
}
