#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        int a[n];
        vector<int> v,d;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back(a[i]);
            d.push_back(a[i]);
        }

        sort(v.begin(), v.end());

        if(v==d){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
