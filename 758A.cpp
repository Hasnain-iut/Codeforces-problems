#include<iostream>
using namespace std;

int maximum(int a[],int n){
    static int max=a[n-1];

    if(n==1) return max;

    if(max<a[n-2]){
        max = a[n-2];
        return maximum(a,n-1);
    }else{
        return maximum(a,n-1);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int j=0;j<n;j++){
        sum+=maximum(a,n) - a[j];
    }
    cout<<sum;
    return 0;
}
