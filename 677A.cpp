#include<iostream>
using namespace std;
int main(){
    int n;
    int f;
    int out=0;
    cin>>n>>f;
    int h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    for(int j=0;j<n;j++){
        if(h[j]>f){
            out++;
        }
    }
    out+=n;
    cout<<out;
    return 0;
}
