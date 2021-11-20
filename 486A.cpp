#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int num;
    long long int sum;
    cin>>num;
    if(num%2==0){
        cout<<num/2;
    }
    else{
        sum=((num-1)/2) - num;
        cout<<sum;
    }
    return 0;
}
