#include<iostream>
using namespace std;
int main(){
    int m,n;
    int sq;
    cin>>m>>n;
    if(m%2!=0 &&n%2!=0){
        sq=(m*n-1)/2;
    }
    else{
        sq=(m*n)/2;
    }
    cout<<sq<<endl;
    return 0;
}
