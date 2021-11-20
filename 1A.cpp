#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long double n,m,x;
    cout.precision(22);
    cin>>n>>m>>x;
    if(m<n){
        long double temp=m;
        m=n;
        n=temp;
    }

    if(x>=m){
        cout<<ceil(m/x);
    }else{
        cout<<ceil(n/x)*ceil(m/x);
    }

    return 0;
}
