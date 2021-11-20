#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num[4];
    int count=0;
    for(int i=0;i<4;i++){
        cin>>num[i];
    }

    sort(num,num+4);
    for(int j=0;j<3;j++){
        if(num[j] == num[j+1]){
            count++;
        }
    }

    cout<<count;
    return 0;
}
