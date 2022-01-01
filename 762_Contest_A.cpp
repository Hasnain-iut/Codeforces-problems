#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        if(n%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        int flag = 0;
        for(int i=0, j=n/2;i<n/2,j<n;i++,j++){
            if(s[i] != s[j]){
                cout<<"NO"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"YES"<<endl;
        }
    }
}
