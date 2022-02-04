#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int c = 1;

        int a = 2;
        int b = n-3;

        while(b%a== 0 || __gcd(a,b)!=1){
            b--;
            a++;
        }

        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}
