#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long int n;
    for(int i=0;i<t;i++){
        cin>>n;
        while(n%2==0){
            n/=2;
        }
        if(n==1)cout<<"NO\n";
        else cout<<"YES\n";
    }
}
