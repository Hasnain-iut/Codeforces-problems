#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int a[n];
        int b[n];

        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            a[i] = s.back() - '0';
        }

        for(int i=0;i<n;i++){
            string g;
            cin>>g;
            b[i] = g.back() - '0';
        }

        int result = 1;

        for(int i=0;i<n;i++){
            if((a[i] == 1 || a[i]==2)&& (b[i] != 3 && b[i] != 4)){
                result = 0;
                break;
            }else if((a[i] == 3 || a[i]==4)&& (b[i] != 1 && b[i] != 2)){
                result = 0;
                break;
            }

            if((a[n-1] != 3 && a[n-1] != 4)){
                result = 0;
            }
        }

        if(result){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
