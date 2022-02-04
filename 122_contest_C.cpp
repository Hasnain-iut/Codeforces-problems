#include<iostream>
using namespace std;
typedef long long int lld;
int main(){

    int t;
    cin>>t;

    while(t--)
    {
         lld hc,hm,dc,dm,k,w,a;

         cin>>hc>>dc;
         cin>>hm>>dm;
         cin>>k>>w>>a;
        int res = 0;
        for(int i=0;i<=k;i++){
            lld hc1 = hc;
            hc1 += i*a;
            lld dc1 = dc;
            dc1 += (k-i)*w;

            lld ans1 = (hm/dc1) + (hm%dc1!=0);
            lld ans2 = (hc1/dm) + (hc1%dm!=0);

            if(ans1<=ans2){
                res = 1;
                break;
            }
        }

        if(res == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}
