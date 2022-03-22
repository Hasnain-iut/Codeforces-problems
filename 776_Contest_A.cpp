
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        char c;
        cin>>s;
        cin>>c;
        int res = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]==c && (i+1)%2!=0){
                res=1;
                break;
            }
        }
        if(res == 0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
