#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        long long a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        if(a[n-1]<a[n-2]){
            cout<<"-1"<<endl;
            continue;
        }

        vector<int> ans;

        int flag = 0;

        for(int i=n-3;i>=0;i--){

            if(a[i+1]-a[n-1] < a[i] && a[i]>a[i+1]){

                a[i] = a[i+1] - a[n-1];
                ans.push_back(i);
            }
            if(a[i]>a[i+1]){
                flag = 1;
            }

        }

        if(flag){
            cout<<"-1"<<endl;
        }else{
            cout<<ans.size()<<endl;
            for(auto it: ans){
                cout<<it+1<<" "<<it+2<<" "<<n<<endl;
            }
        }
    }

    return 0;
}
