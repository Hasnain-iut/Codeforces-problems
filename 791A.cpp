#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int i;
    for(i=1;i<10;i++){
        a=3*a;
        b=2*b;
        if(a>b){
            break;
        }
    }
    cout<<i;
    return 0;
}
