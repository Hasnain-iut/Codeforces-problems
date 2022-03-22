#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,a;
        cin>>l>>r>>a;


        int sum1 = r/a;
        sum1+=r%a;

        int y = r-r%a-1;
        int sum2 = y/a;
        sum2+=y%a;

        if(y>=l)cout<<max(sum1, sum2)<<endl;
        else cout<<sum1<<endl;
    }
    return 0;
}
