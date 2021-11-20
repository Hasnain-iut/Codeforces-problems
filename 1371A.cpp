#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        if(n>2){
            x=2+((n-3)/2);
        }else{
            x=1;
        }

        cout<<x<<endl;
    }

    return 0;
}
