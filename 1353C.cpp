#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a = 0;

        if(n==1){
            cout<<"0"<<endl;
        }else if(n==3){
            cout<<"8"<<endl;
        }else{
            long long int x=1;
            for(int i=3;i<=n;i+=2){
                a+=x*x;
                x++;
            }
            a*=8;
            cout<<a<<endl;
        }
    }
    return 0;
}
