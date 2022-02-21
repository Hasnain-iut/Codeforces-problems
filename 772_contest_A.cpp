
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        long long int sum = (a[0] | a[1]);
        for(int j=2;j<n;j++){
            sum = (sum |a[j]) ;
        }

        cout<<sum<<endl;
    }
    return 0;

}
