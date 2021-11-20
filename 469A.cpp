#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int arr[250];
    int n,p,q,count=0;
    cin>>n;
    cin>>p;

    for(int i=0;i<p;i++){
        cin>>arr[i];
    }
    cin>>q;
    for(int j=p;j<p+q;j++){
        cin>>arr[j];
    }
    int k=p+q;
    sort(arr, arr+k);

    for(int h=0;h<p+q;h++){
        if(arr[h]!=arr[h+1]){
            count++;
        }
    }

    if(n==count){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
