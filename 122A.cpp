#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num%4 == 0 || num%7 ==0){
        cout<<"YES";
    }
    else if(num%47 == 0 || num%74 == 0 || num%447 ==0){
        cout<<"YES";
    }
    else if(num%474 == 0 || num%774 == 0 || num%747 ==0){
        cout<<"YES";
    }
    else if(num%477 == 0 || num%777 == 0 || num%444 ==0|| num%744 == 0){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}
