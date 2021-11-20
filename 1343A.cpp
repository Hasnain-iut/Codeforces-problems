#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        for(int k=2; k<10e9;k++){
            int p=pow(2,k)-1;
            if(a%p==0){
                cout<<a/p<<"\n";
                break;
            }
        }
    }
    return 0;
}
