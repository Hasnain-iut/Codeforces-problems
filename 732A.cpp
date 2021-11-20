#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int value=n, count=1, i=2;
    while(1){
        if(value%10==0){
            cout<<count;
                break;
        }if(value%10==k){
            cout<<count;
            break;
        }
        value=n*i;
        i++;
        count++;
    }

    return 0;
}
