#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
typedef long long int lld;
int main(){
    int n,x;
    cin>>n>>x;

    int a[n+1];
    a[0] = 0;

    int sum[n+1];
    sum[0] = 0;

    int k =0;
    for(int i=1;i<n+1;i++){
        cin>>a[i];
        k +=a[i];
        sum[i] = k;
    }
    int s[n-x+1];

    for(int i=0;i<n-x+1;i++){
        int lk = sum[i+x] - sum[i];

        s[i] = lk;
    }
    int low = s[0];
    int ind = 1;
    for(int i=0;i<n-x+1;i++){
        if(low>s[i]){
            low = s[i];
            ind = i+1;
        }
    }

    cout<<ind<<endl;
}
