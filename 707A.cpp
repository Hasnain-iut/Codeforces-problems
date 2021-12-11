#include<iostream>
using namespace std;
int main(){
    int t,k;
    cin>>t>>k;
    char a[t][k];
    for(int i=0;i<t;i++){
        for(int j=0;j<k;j++){
            cin>>a[i][j];
        }
    }

    for(int x=0;x<t;x++){
        for(int y=0;y<k;y++){
            if(a[x][y] != 'W' && a[x][y] != 'B' && a[x][y] != 'G'){
                cout<<"#Color";
                return 0;
            }
        }
    }
    cout<<"#Black&White";
    return 0;
}
