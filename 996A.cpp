#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int _100=0,_20=0,_10=0, _5=0, _1=0;

    if(num/100!=0){
        _100=num/100;
        num=num%100;
    }
    if(num/20!=0){
        _20=num/20;
        num=num%20;
    }
    if(num/10!=0){
        _10=num/10;
        num=num%10;
    }
    if(num/5!=0){
        _5=num/5;
        num=num%5;
    }
    if(num!=0){
        _1=num;
    }

    int n=_100+_20+_10+_5+_1;
    cout<<n;
    return 0;
}
