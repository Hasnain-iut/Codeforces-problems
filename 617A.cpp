#include<iostream>
using namespace std;
int main(){
    int x;
    int y=0;
    cin>>x;
    y=x/5;
    if(x%5>0){
        y++;
    }
    cout<<y;
    return 0;
}
