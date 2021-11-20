#include<iostream>
using namespace std;
int main(){
    int n,capacity=0;
    cin>>n;
    int room[n][2];

    for(int i=0; i<n;i++){
        cin>>room[i][0]>>room[i][1];
    }

    for(int j=0;j<n;j++){
        if(room[j][1] - room[j][0] >=2){
            capacity++;
        }
    }

    cout<<capacity;
    return 0;
}
