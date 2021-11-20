#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c, d;
    c = a>b? b: a;
    if(a>b){
        a-=b;
        d= a/2;
    }else{
        b-=a;
        d=b/2;

    }
    cout<<c<<" "<<d;
    return 0;
}
