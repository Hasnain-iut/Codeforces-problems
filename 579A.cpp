#include<iostream>
#include<math.h>
using namespace std;
int main(){
    typedef long long int lld;
    lld n,ans=0;
    cin>>n;

    while(n>1){
    if(n%2==0){
        n=n/2;
    }else{
        n=n-1;
        ans++;
    }
    }
    cout<<ans+1;

}
