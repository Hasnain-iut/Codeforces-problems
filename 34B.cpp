#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int t,k;
    cin>>t>>k;
    int a[t];
    int sum=0;
    for(int i=0;i<t;i++){
        cin>>a[i];
    }

    sort(a, a+t);

    for(int i=0;i<k;i++){
        if(a[i]<0){
            sum+=abs(a[i]);
        }
    }

    cout<<sum<<endl;
    return 0;
}
