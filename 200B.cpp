#include<iostream>
using namespace std;
int main(){
    int n;
    float v=0;
    cin>>n;
    float f[n];
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    for(int j=0;j<n;j++){
        v= v+ f[j]/100;

    }

    float r= v / n * 100;
    cout<<r;
    return 0;
}
