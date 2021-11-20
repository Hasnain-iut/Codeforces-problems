#include<iostream>
typedef long long int lld;
using namespace std;

lld minimum(lld x, lld y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        lld x,y;
        cin>>x>>y;
        lld a,b;
        cin>>a>>b;
        if(x>y){
            lld temp = x;
            x = y;
            y = temp;
        }
        lld answer1= b*x + a*(y-x);
        lld answer2 = x*a + y*a;
        cout<<minimum(answer1, answer2)<<endl;
    }
    return 0;
}
