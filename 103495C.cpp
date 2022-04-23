#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[10];
        for(int i=0;i<10;i++){
            cin>>a[i];
        }

        vector<int> v1;
        int i;
        for(i=1;i<10;i++){
            if(a[i]!=0){
                for(int j=0;j<a[i];j++){
                    v1.push_back(i+1);
                }
                break;
            }
        }

        if(a[0]!=0){
            for(int x=0;x<a[0];x++){
                v1.push_back(0);
            }
        }

        while(i<10){
            if(a[i]!= 0){
                for(int j=0;j<a[i];j++){
                    v1.push_back(i+1);
                }
            }
        }

        for(int k=1;k<v1.length();k++){
            if(v1[k] == v1[k-1] && v1[k]){

            }
        }

    }
}
