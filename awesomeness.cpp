#include<iostream>
using namespace std;
int main(){
    int n;
    int f=0;
    cin>>n;
    int arr[n];
    if(n==1){
        cout<<"False";
        return 0;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            f=1;
        }else{
            f=0;
            break;
        }
    }
    if(f==1){
        cout<<"True";
    }else{
        cout<<"False";
    }
}
