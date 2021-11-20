#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;

        int balance =0,answer=0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                balance++;
            }
            else{
                --balance;
                if(balance<0){
                    balance=0;
                    answer++;
                }
            }
        }

        cout<<answer<<endl;
    }
}
