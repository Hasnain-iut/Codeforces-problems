#include<iostream>
using namespace std;
int main(){
    int k,w;
    long long int n;
    cin>>k>>n>>w;
    int l = 0;
    for(int i=1; i<=w; i++){
        l = l + (i*k);
    }
    int h = l - n;
    if(h>0){
        cout<<h<<endl;
    } else{
        cout<<0<<endl;
    }
    return 0;
}
