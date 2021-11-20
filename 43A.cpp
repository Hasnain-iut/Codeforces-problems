#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int total[2]={0};
    string a;
    cin>>a;
    total[0]++;
    string c;
    string b;
    for(int i=0;i<t-1;i++){
        cin>>c;
        if(c==a){
            total[0]++;
        }else{
            b=c;
            total[1]++;
        }
    }

    if(total[0]>total[1]){
        cout<<a;
    }else if(total[1]>total[0]){
        cout<<b;
    }
    return 0;
}
