#include<iostream>
using namespace std;

int minimum(int x, int y, int z){
    if(x<y){
        if(x<z){
            return x;
        }else{
            return z;
        }
    }else{
        if(y<z){
            return y;
        }else{
            return z;
        }
    }
}

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x=(k*l)/nl;
    int y=(c*d);
    int z=(p/np);

    int h=minimum(x,y,z)/n;
    cout<<h;
    return 0;
}
