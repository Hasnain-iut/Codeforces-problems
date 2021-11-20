#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a=m,b=n;
    for(int i=0;i<a && i<b;i++){
        m--;
        n--;
        if(m<=0 || n<=0){
            cout<<"Akshat";
            break;
        }
        m--;
        n--;
        if(m<=0 || n<=0){
            cout<<"Malvika";
            break;
        }
    }
    return 0;
}
