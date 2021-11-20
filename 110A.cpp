#include<iostream>
using namespace std;
int main(){

    long long int num;
    int count=0, n=0;
    cin>>num;

    while(n<num){
        if(num%10==7 || num%10==4){
            count++;
        }
        num = num/10;
    }

    if(count==4 || count == 7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
