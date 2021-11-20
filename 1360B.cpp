#include<iostream>
using namespace std;

void increase(int a[], int n){
    if(n==0)
        return;

    int max=0;

    for(int i=0;i<n;i++){
        if(a[i]>a[max]){
            max=i;
        }
    }
    int temp=a[n-1];
    a[n-1] = a[max];
    a[max] = temp;
    increase(a, n-1);
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
        increase(a, n);

        int sum = a[1] - a[0];
        for(int j=0;j<n-1;j++){
            if(sum>a[j+1] - a[j]){
                sum=a[j+1] - a[j];
            }
        }
        cout<<sum<<endl;
}
}
