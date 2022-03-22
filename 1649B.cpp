#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int lld;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        lld a[n];
        int isZero = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                isZero ++;
            }
        }

        if(isZero == n){
            cout<<"0"<<endl;
            continue;
        }

        sort(a, a+n, greater<int>());

        lld s = 0;

        for(int i=1;i<n;i++){
            s+=a[i];
        }



        if(a[0]<=s){
            cout<<"1"<<endl;
        }else if(a[0]>s){

            cout<<a[0] - s<<endl;
        }else{
            cout<<"0"<<endl;
        }
    }
}
