#include<iostream>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    ll n;

    while(t--){
        ll cnt2=0,cnt3=0;
        cin>>n;
        while(!(n%2)){
            n/=2;
            cnt2++;
        }
        while(!(n%3)){
            n/=3;
            cnt3++;
        }
        if(n!=1 || cnt2>cnt3) cout<<"-1\n";
        else cout<<(cnt3-cnt2) + cnt3<<"\n";
        n=0;
    }
    return 0;
}
