#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n<=2){
        cout<<n<<endl;
        return 0;
    }
    int left[1000] = {0}, right[1000] = {0};

    for(int i=1;i<n;i++){
        left[i] = (a[i]>=a[i-1] ? left[i-1] + 1 : 0);
    }

    for(int i=n-2;i>=0;i--){
        right[i] = (a[i]>=a[i+1] ? right[i+1] + 1 : 0);
    }
    int maximum = 0;
    for(int i=0;i<n;i++){
        if(left[i]+ right[i] + 1>maximum){
            maximum = left[i] + right[i] + 1;
        }
    }

    cout<<maximum<<endl;
    return 0;
}
