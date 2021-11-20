#include<iostream>
using namespace std;
int main(){
    int a, x, y, z;
    int x1=0, y1=0, z1=0;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>x>>y>>z;
        x1 = x + x1;
        y1 = y + y1;
        z1 = z + z1;
    }
    if(x1 == 0 && y1 == 0 && z1 ==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
