#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long long int lld;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        lld a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a, a+n);
        lld sum = 0;
        for(int i=1;i<n;i++){
            sum+=abs(a[i]-a[0]);
        }

        cout<<sum<<endl;
    }
}
