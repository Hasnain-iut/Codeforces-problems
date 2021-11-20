#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    bool isright= true;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=m;j++){
                cout<<'#';
            }
        }else{
            if(isright){
                for(int k=1;k<=m-1;k++){
                    cout<<'.';
                }
                cout<<'#';
                isright=false;
            }else{
                cout<<'#';
                for(int l=2;l<=m;l++){
                    cout<<'.';
                }
                isright=true;
            }
        }
        cout<<"\n";
    }
}
