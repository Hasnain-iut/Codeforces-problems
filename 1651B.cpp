#include<iostream>
#include<math.h>
typedef unsigned long long int lld;
using namespace std;

unsigned long long int ipow( unsigned long long int base, int exp )
{
    unsigned long long int result = 1ULL;
    while( exp )
    {
        if ( exp & 1 )
        {
            result *= (unsigned long long int)base;
        }
        exp >>= 1;
        base *= base;
    }
    return result;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        lld x = ipow(3, n-1);
        lld y = ipow(10, 9);
        if(x> y){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<ipow(3, i)<<" ";
            }
            cout<<endl;
        }
    }
}
