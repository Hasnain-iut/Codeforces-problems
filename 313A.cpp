#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,r,s,t;
    cin>>n;
    if(n>=0){
        cout<<n;
    }else{
        r=(n/10);
        t =abs(n%10);
        s=((n/100)*10) - t;
        if(r<=s){
            cout<<s;
        }else{
            cout<<r;
        }
    }
    return 0;
}
