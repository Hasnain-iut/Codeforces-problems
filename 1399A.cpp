#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cin>>num;
    int result[num];
    int r=0;
    for(int i=1;i<=num;i++){
        int h,x=1;
        cin>>h;
        int arr[h];
        for(int j=0;j<h;j++){
            cin>>arr[j];
        }
        sort(arr, arr+h);
        for(int k=1;k<h;k++){
            if(arr[k]-arr[k-1]==1 || arr[k]-arr[k-1]==0){
                x=1;
            }else{
                x=0;
                break;
            }
        }
        if(x==1){
            result[r] = 1;
        }else{
            result[r] = 0;
        }
        r++;
    }

    for(int y=0;y<num;y++){
        if(result[y]==0){
            cout<<"NO"<<endl;
        }else if(result[y]==1){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
