#include<iostream>
using namespace std;
int main(){

    int n,count=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largenum=arr[0];
    int smallnum=arr[0];

    for(int h=1;h<n;h++){
        if(arr[h]>largenum){
            largenum=arr[h];
            count++;
        }
        if(arr[h]<smallnum){
            smallnum=arr[h];
            count++;
        }
    }
    cout<<count;
    return 0;
}
