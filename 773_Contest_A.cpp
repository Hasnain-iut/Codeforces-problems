#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[3];
        int b[3];
        for(int i=0;i<3;i++){
            cin>>a[i]>>b[i];
        }
        double ans =0;
        if(b[0]==b[1] && b[2]<b[0]){
            ans = abs(a[0]-a[1]);
        }
        else if(b[1]==b[2] && b[0]<b[1]){
            ans = abs(a[1]-a[2]);
        }
        else if(b[0]==b[2] && b[1]<b[0]){
            ans = abs(a[0]-a[2]);
        }
        printf("%.6f\n", ans);
    }
}
