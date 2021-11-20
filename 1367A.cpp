#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
        string v;
        cin>>v;
        string h;
        h=v.substr(0,2);
        for(int i=3;i<v.length();i+=2){
            h+=v[i];
        }
        cout<<h<<endl;
    }
    return 0;
}
