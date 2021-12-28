#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long count = (long long)sqrt(n) + (long long)cbrt(n) - (long long)sqrt(cbrt(n));
        cout<<count<<endl;
    }
    return 0;
}
