#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int j=0;j<t;j++){
        cout<<a[j]/2<<"\n";
    }
}
