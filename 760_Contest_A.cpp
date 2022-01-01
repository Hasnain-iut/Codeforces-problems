#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[7];
        for(int i=0;i<7;i++){
            cin>>a[i];
        }
        int x = a[6] - a[0] - a[1];
        int y = a[0];
        int z = a[1];

        cout<<x<<" "<<y<<" "<<z<<endl;
    }

    return 0;
}
