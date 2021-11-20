#include<iostream>
using namespace std;
int main(){
    int num, count=0;
    cin>>num;

    int a[num], b[num];
    for(int i=0;i<num;i++){
        cin>>a[i]>>b[i];
    }

    for(int j=0;j<num;j++){
        for(int k=0;k<num;k++){
            if(j!=k && a[j] == b[k]){
                count++;
            }
        }
    }

    cout<<count;
    return 0;
}
