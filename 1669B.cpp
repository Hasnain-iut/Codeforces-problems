
#include<iostream>
#include<algorithm>
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
        sort(a, a+n);
        int res = 0;
        for(int i=0;i<n-2;i++){
            if(a[i]==a[i+1] && a[i+1] == a[i+2]){
                cout<<a[i]<<endl;
                res = 1;
                break;
            }
        }

        if(res==0){
            cout<<"-1"<<endl;
        }
    }
}
