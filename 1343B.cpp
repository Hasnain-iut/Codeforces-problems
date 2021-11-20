#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=1,y=2;
    for(int j=0;j<n;j++){
        if((arr[j]%4)==0){
            cout<<"YES\n";
            for(int k=1;k<=arr[j]/2;k++){
                cout<<y<<" ";
                y+=2;
            }
            for(int h=1;h<=arr[j]/2;h++){
                if(h==arr[j]/2){
                    cout<<x+(arr[j]/2);
                }else{
                    cout<<x<<" ";
                }
                x+=2;
            }
            cout<<"\n";
            x=1;
            y=2;
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
