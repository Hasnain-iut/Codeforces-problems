#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d = b-c;
        int aa = b+d;
        if(aa%a==0 && aa/a>0){
            cout<<"Yes"<<endl;
            continue;
        }
        d = b-a;
        int cc = b+d;
        if(cc%c==0 && cc/c>0){
            cout<<"Yes"<<endl;
            continue;
        }
        if((a+c)%2 ==0 && ((a+c)/2)%b==0 && (((a+c)/2)/b)>0){
            cout<<"Yes"<<endl;
            continue;
        }
        cout<<"No"<<endl;
    }
}
