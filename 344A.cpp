#include<iostream>
using namespace std;
int main(){

    int n, v=1;
    cin>>n;
    int g[n];
    for(int i=0;i<n;i++){
        cin>>g[i];
    }
    for(int j=0;j<n;j++){
        if(j<n-1){
            if(g[j]!=g[j+1]){
                v++;
            }
        }
    }
    cout<<v;
    return 0;
}
