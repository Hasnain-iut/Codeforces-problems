#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k, m=0, team=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int j=0;j<n;j++){
        if(arr[j]+k<6){
           m++;
            if(m==3){
                team++;
                m=0;
            }
        }
    }
    cout<<team;
    return 0;
}
