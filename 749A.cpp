#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    if(n%2==0){
        s=n/2;
        cout<<s<<endl;
        for(int i=1;i<=s;i++){
            cout<<"2 ";
        }
        cout<<endl;
    }
    else{
        s=n/2;
        cout<<s<<endl;
        for(int i=1;i<s;i++){
            cout<<"2 ";
        }
        cout<<"3"<<endl;
    }
    return 0;
}
