#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int l=0,r = s.length()-1;
        for(int i=0;i<s.length();i++){
            if(s[i] == '1'){
                l=i;
            }
        }

        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == '0'){
                r=i;
            }
        }


        cout<<r-l+1<<endl;
    }
}
