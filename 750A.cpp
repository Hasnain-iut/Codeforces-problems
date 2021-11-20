#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int time=240-k;
    int sum=0;
    int c=0;
    for(int i=1;i<=n;i++){
        if(sum+i*5<=time){
            sum+=i*5;
        }else{
            break;
        }
        c++;
    }
    cout<<c;
    return 0;
}
