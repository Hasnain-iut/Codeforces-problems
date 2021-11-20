#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0,result=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<n;j++){
        count+=arr[j];
        if(count<0){
            result++;
            count=0;
        }
    }
    cout<<result;
    return 0;
}
