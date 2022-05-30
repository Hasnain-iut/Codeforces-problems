#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long int lld;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n,q;
        cin>>n>>q;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        vector<lld> v;


        lld sum = 0;
        for(int i=n-1;i>=0;i--){
            sum+=a[i];
            v.push_back(sum);
        }


        while(q--){
            int h;
            cin>>h;

            if(h<=sum){
                int low = 0;
                int high =n-1;
                int mid = (high - low)/2;

                if(n<=5 || h<=5){
                    for(int i=0;i<v.size();i++){
                        if(v[i]>=h){
                            cout<<i+1<<endl;
                            break;
                        }
                    }
                }
                else{
                while(low<=high){
                    mid = low + (high-low)/2;

                    if(high - low <= 1){
                        cout<<high+1<<endl;
                        break;
                    }

                    if(v[mid] < h){
                        low = mid;
                    }
                    else if(v[mid] > h){
                        high = mid;
                    }else if(v[mid] == h){
                        cout<<mid+1<<endl;
                        break;
                    }

                }}
            }
            else{

                cout<<"-1"<<endl;

            }
        }
    }
}
