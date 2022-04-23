#include<iostream>
#include<map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int a[n];

        int odd[26];
        int even[26];
        int j=0;
        int k =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0){
                even[j] = a[i]%2;
                j++;
            }else{
                odd[k] = a[i]%2;
                k++;
            }
        }

        int res = 1;

        for(int i=0;i<j-1;i++){
            if(even[i] != even[i+1]){
                res = 0;
            }
        }
        for(int i=0;i<k-1;i++){
            if(odd[i] != odd[i+1]){
                res = 0;
            }
        }
        if(res == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
