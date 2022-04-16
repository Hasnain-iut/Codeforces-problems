#include<iostream>
using namespace std;
typedef long long int lld;
int main(){
    string n;
    cin>>n;

    if(n.length()==1){
        cout<<"0"<<endl;
        return 0;
    }

    lld value = 0;
    lld steps = 1;
    for(int i=0;i<n.length();i++){
        value+=n[i] - '0';
    }

    lld f = value;

    while(value>=10){
        value = 0;
        while(f){
            value+=f%10;
            f/=10;
        }
        steps++;
        f = value;
    }

    cout<<steps<<endl;

}
