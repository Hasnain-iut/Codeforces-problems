#include<iostream>
using namespace std;
int main(){
    long long int n,k;

    cin>>n>>k;

    long long int x=n/2;

    if(n%2!=0){
        x+=1;
    }

    if(k<=x){
        cout<<(k*2)-1;
    }else{
        k=k-x;
        cout<<k*2;
    }

    return 0;
}
