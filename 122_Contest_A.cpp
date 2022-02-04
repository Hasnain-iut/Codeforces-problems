#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n%7==0){
            cout<<n<<endl;
            continue;
        }

        int o =n%10;
        int x = n-o;

        if(x==0)x++;
        while(x%7 !=0 ){

            x++;
        }

        cout<<x<<endl;
    }
}
