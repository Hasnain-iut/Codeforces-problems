#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count =0;
        int money = 0;
        sort(a, a+n);
        for(int i=0;i<n;i++){
            if(a[i]<=r && a[i]>=l && money+a[i]<=k){\
                money+=a[i];
                count++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}
