#include<iostream>
#include<algorithm>
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

        sort(a, a+n);

        int is_found[n] = {0};

        for(int i=0;i<n;i++){
            if(a[i] == a[i+1]){
                is_found[i] = 1;
            }
        }

        int flag = 0;

        for(inr i=0;i<n;i++){
            if(is_found[i] == 1)
        }

    }
}
