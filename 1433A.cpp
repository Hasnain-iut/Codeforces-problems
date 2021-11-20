#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=1;
        int count= ((n%10)-1)*10;
        while(n){
            count += (n%10>0)*i;
            n=n/10;
            i++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
