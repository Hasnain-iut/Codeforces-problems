#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        string s;
        cin>>s;

        if(n<2){
            cout<<"NO"<<endl;
            continue;
        }
        int b_found = 0;
        int r_found = 0;
        int result = 1;
        for(int i=0;i<n;i++){

            if(s[i]=='W' && i!=0 && i!=n-1 &&s[i+1]!='W'){
                if(b_found == 0 || r_found == 0){
                    result = 0;
                    break;
                }

            }
             if(s[i] == 'B') b_found = 1;
            else if(s[i] == 'R') r_found = 1;
        }

        if(result == 0){
            cout<<"NO"<<endl;
        }else if(result == 1){
            cout<<"YES"<<endl;
        }
    }
}
