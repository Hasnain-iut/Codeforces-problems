#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    int one=0;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
        if(a[i]==1){
            one++;
        }
    }

    int ans =0;
    int sum=0;
    for(int i=0;i<t;i++){
        if(a[i]==0){
            sum++;
        }else{
            sum--;
        }
        ans = max(ans, sum);
        if(sum<0){
            sum=0;
        }
    }

    if(one==t)cout<<t-1<<endl;
    else cout<<one+ans<<endl;
}
