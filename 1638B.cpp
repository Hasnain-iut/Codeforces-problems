#include<iostream>
#include<algorithm>
#include<vector>
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

        vector<int> v1,v2, odd, even;

        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                v2.push_back(a[i]);
                even.push_back(a[i]);
            }else{
                v1.push_back(a[i]);
                odd.push_back(a[i]);
            }
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        if(v1==odd && v2 == even){

            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

