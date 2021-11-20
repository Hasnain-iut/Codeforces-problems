#include<iostream>
using namespace std;

int fda(int a[], int n){
    if(a[0] == a[1] && a[1]!=a[2]){
        return 2;
    }if(a[0] != a[1] && a[1]==a[2]){
        return 0;
    }if(a[0] == a[2] && a[0]!=a[1]){
        return 1;
    }for(int i=3;i<n;i++){
        if(a[i] != a[i-1]){
            return i;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
             cin>>a[i];
        }
        cout<<fda(a,n)+1<<endl;
    }
}
