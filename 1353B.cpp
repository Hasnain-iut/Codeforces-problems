#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum=0;
    for(int i=0;i<t;i++){
        int n,k, sum1=0,sum2=0;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum1+=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        sort(a, a+n);
        sort(b, b+n);
        reverse(b, b+n);
        int x=0;
        for(int i=0;i<n;i++){
            if(x==k) break;
            if(a[i]<b[i]){
                swap(a[i], b[i]);
                x++;
            }
        }
        for(int i=0;i<n;i++){
            sum2+=a[i];
        }
        if(sum1>sum2) cout<<sum1<<"\n";
        else cout<<sum2<<"\n";

    }

    return 0;
}
