#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n,m;
        cin>>n>>m;
        char arr[n][m+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }

        arr[n-1][m] = '\0';
        vector<int> v;
        for(int i =0;i<n-1;i++){

            for(int k=i+1;k<n;k++){
                int sum = 0;
                for(int j=0;j<m;j++){
                    sum += abs((arr[k][j] - '0') - (arr[i][j] - '0'));
                }
                v.push_back(sum);
            }
        }


        sort(v.begin(), v.end());

        cout<<v[0]<<endl;
    }


}
