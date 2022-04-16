#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,a;
        cin>>l>>r>>a;
        int y = r;

        if(r==l){
            int sum = r/a;
            sum+=r%a;
            cout<<sum<<endl;
        }else {
            if(r%a==0){
                y = r-1;
            }
            int z = r;
            if(a<r && a>l){
                z = a-1;
            }

            int sum1 = r/a;
            sum1+=r%a;
            int sum2 = y/a;
            sum2 += y%a;
            int sum3 = z/a;
            sum3+= z%a;

            int m = max({sum1, sum2, sum3});

            cout<<m<<endl;
        }
    }
}
