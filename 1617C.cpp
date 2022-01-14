#include<iostream>
using namespace std;
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

        int flag =0;
        for(int i=0;i<n;i++){
            if(a[i]<=n){
                continue;
            }else if((i+1)<(a[i]/2)){
                flag++;
            }else{
                flag=-1;
                break;
            }
        }
        cout<<flag<<endl;
    }
}
