#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        if(n.length()<=2){
            cout<<"0"<<endl;
            continue;
        }
        int zeros = 0;
        int ones = 0;
        for(int i=0;i<n.length();i++){
            if(n[i] == '0'){
                zeros++;
            }else if(n[i] == '1'){
                ones++;
            }
        }

        if(zeros == ones){
            cout<<zeros-1<<endl;
        }else{
            if(zeros<ones){
                cout<<zeros<<endl;
            }else if(ones<zeros){
                cout<<ones<<endl;
            }
        }
    }
}
