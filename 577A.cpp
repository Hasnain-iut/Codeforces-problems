#include<iostream>
typedef long long int lld;
using namespace std;
int main(){
    lld x,y;
    cin>>x>>y;
    int ans=0;
    for(int i=1;i<=x;i++){
        if(y%i==0 &&y/i<=x){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
