#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>x>>y>>n;
        int sum=0;
        if(n-n%x+y<=n) sum=n-n%x+y;
        else sum= n-((x-y)+n%x);
        cout<<sum<<endl;
    }
}
