#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int f[n];
    int k[n];

    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    for(int j=1;j<=n;j++){
        for(int l=0;l<n;l++){
            if(f[l]==j){
                k[j-1] = l+1;
            }
        }
        cout<<k[j-1]<<" ";
    }
    return 0;
}
