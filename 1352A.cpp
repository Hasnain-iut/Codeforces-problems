#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int r, m=1,total=0;
        cin>>r;
        int arr[5]={0};
        for(int i=0;i<5;i++){
            arr[i]+=r%10;
            r/=10;
            if(arr[i]!=0){
                total++;
            }
        }
        cout<<total<<"\n";
        for(int j=0;j<5;j++){
            if(arr[j]!=0){
                cout<<arr[j]*m<<" ";
            }
            m*=10;
        }
        cout<<"\n";
    }
    return 0;
}
