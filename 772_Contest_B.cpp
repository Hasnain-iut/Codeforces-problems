#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        a[n] = 0;
        int slope[n];
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]){
                slope[i] = 1;
            }else if(a[i]==a[i-1]){
                slope[i] = 0;
            }else{
                slope[i] = -1;
            }

        }
        int sum=0;
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1]){
                slope[i] = 1;
            }else if(a[i]==a[i-1]){
                slope[i] = 0;
            }else{
                slope[i] = -1;
            }

            if(slope[i]==1 && slope[i+1]==-1){
                a[i+1] = max(a[i],a[i+2]);
                sum++;
            }
        }
        cout<<sum<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }cout<<endl;
    }

}
