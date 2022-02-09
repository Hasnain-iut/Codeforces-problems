#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;

        if(k*k<=n && n%2==k%2){
            cout<<"YES\n";
        }else{
            cout<<"No\n";
        }
    }

    return 0;
}
