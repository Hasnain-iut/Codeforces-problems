#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int misha=0,chris=0;
    while(n--){
        int m,c;
        cin>>m>>c;
        if(m>c){
            misha++;
        }else if(c>m){
            chris++;
        }else{
            misha++;
            chris++;
        }
    }

    if(misha>chris){
        cout<<"Mishka";
    }else if(chris>misha){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
}
