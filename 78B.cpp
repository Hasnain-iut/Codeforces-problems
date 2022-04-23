#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;

    int x = n%7;

    for(int i = 7;i<=n;i+=7){
        cout<<"ROYGBIV";
    }

    if(x==0){
        cout<<"";
    }else if(x==1){
        cout<<"G";
    }else if(x==2){
        cout<<"GB";
    }else if(x==3){
        cout<<"YGB";
    }else if(x==4){
        cout<<"YGBI";
    }else if(x==5){
        cout<<"OYGBI";
    }else if(x==6){
        cout<<"OYGBIV";
    }
    return 0;
}
