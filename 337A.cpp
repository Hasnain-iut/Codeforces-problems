#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr, arr+m);
    int h = arr[n-1] - arr[0];
    for(int j=0;j<m;j++){
        if((arr[j+n-1] - arr[j]) < h){
            h = arr[j+n-1] - arr[j];
        }

        if(j+n>=m){
            break;
        }
    }

    cout<<h;
    return 0;
}
