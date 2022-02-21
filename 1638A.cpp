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
        int c[n];
        vector<int> a;
        for(int i=0;i<n;i++){
            cin>>c[i];
            a.push_back(c[i]);
        }

        int lowest = -1, start = -1, finish = -1;;

        for(int i=0;i<n;i++){
            if(a[i]!=i+1){
                lowest = i+1;
                start = i;
                break;
            }
        }

        if(lowest == -1){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }else{
            for(int i=0;i<n;i++){
                if(a[i] == lowest){
                    finish = i;
                    break;
                }
            }
            reverse(a.begin()+start, a.begin()+finish+1);

            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }

        cout<<endl;
    }

}
