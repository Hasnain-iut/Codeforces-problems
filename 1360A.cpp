#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b>a){
            int temp = a;
            a = b;
            b = temp;
        }
        b*=2;
        while(a!=b){
            if(b>a) a++;
            else b++;
        }
        int sum = a*b;
        cout<<sum<<endl;
    }
    return 0;
}
