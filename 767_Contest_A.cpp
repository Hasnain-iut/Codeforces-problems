#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        vector< pair<int, int> > vec;
        for(int j=0;j<n;j++){
           vec.push_back(make_pair(a[j], b[j]));
        }

        sort(vec.begin(), vec.end());
        int count = k;
        for(int i=0;i<vec.size();i++){
            if(count>=vec[i].first){
                count+=vec[i].second;
            }
        }

        cout<<count<<endl;
    }
}
