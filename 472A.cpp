#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    if(n%2==0){
        a=n-8;
        cout<<8<<" "<<a;
    }else {
        a=n-9;
        cout<<9<<" "<<a;
    }
    return 0;
}
