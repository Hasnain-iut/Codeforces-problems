#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[n];
    int v=0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        if(p[i]==1){
            v++;
        }
    }
    if(v>0){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
    return 0;
}
