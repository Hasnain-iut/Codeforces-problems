#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sq[num];
    for(int i=0;i<num;i++){
        cin>>sq[i];
    }
    sort(sq,sq+num);
    for(int j=0;j<num;j++){
        cout<<sq[j]<<" ";
    }
    return 0;
}
