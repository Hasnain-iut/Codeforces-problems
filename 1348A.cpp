#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int h=n/2;
        int sum=0;
        while(h!=0){
            sum += pow(2,h);
            h--;
        }
        cout<<sum<<endl;
    }
    return 0;
}

