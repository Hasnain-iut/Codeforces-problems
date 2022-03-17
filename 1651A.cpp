#include<iostream>
#include<math.h>
typedef long long int lld;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        lld p = pow(2, n);

        cout<<p-1<<endl;
    }
}
