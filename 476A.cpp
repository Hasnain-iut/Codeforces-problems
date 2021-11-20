#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    int x;
    if(m>n){
        x=-1;
    }else {
        if(n%2==0) x=n/2;
        else x=(n/2)+1;

        while(x%m!=0){
            x++;
        }
    }

    cout<<x<<endl;
    return 0;
}
