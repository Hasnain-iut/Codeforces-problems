#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;

    int a[t];
    int asum=0;

    for(int i=0;i<t;i++){
        cin>>a[i];
        asum+=a[i];
    }

    int b[t-1];
    int bsum = 0;

    for(int i=0;i<t-1;i++){
        cin>>b[i];
        bsum+=b[i];
    }

    int c[t-2];
    int csum=0;

    for(int i=0;i<t-2;i++){
        cin>>c[i];
        csum+=c[i];
    }

    cout<<asum-bsum<<endl;
    cout<<bsum-csum<<endl;
    return 0;
}
