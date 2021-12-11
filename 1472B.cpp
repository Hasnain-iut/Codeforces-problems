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
        int cnt1=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(a[i]==1){
                cnt1++;
            }
        }
        if(sum%2==0){
            sum/=2;
            if((sum%2==0)|| (sum%2==1 && cnt1!=0 )){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }
    }
}
