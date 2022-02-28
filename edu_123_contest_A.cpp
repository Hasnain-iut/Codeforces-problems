#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        string n;
        cin>>n;
        int count = 0;
        int keys[3] = {0};
        for(int i=0;i<n.length();i++){
            if(n[i] == 'r'){
                keys[0] = 1;
            }else if( n[i] == 'g'){
                keys[1] = 1;
            }else if( n[i] == 'b'){
                keys[2] = 1;
            }else if( n[i] == 'R' && keys[0] == 1){
                count = 1;
            }else if( n[i] == 'G'&& keys[1] == 1){
                count = 1;
            }else if( n[i] == 'B'&& keys[2] == 1){
                count = 1;
            }else{
                count = 0;
                break;
            }
        }
    if(count) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}
