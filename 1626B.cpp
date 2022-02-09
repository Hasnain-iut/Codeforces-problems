#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        bool flag = false;
        for(int i=n.length()-1;i>0;i--){

            int x = (n[i]-'0') + (n[i-1]-'0');
            if(x>=10){
                n[i] = x%10 + '0';
                n[i-1] = x/10+ '0';
                flag = true;
                break;
            }
        }

        if(flag == true){
            while(*n.begin()=='0'){
                n.erase(n.begin());
            }
            cout<<n<<endl;
        }else{
            int y = (n[0]-'0') + (n[1]-'0');
            n[0] = y/10 + '0';
            n[1] = y%10 + '0';
            while(*n.begin()=='0'){
                n.erase(n.begin());
            }
            cout<<n<<endl;
        }
    }
}
