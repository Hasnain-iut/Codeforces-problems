#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a, p=0;
    cin>>a;
    int b,c;
    int r[1000];
    for(int i=0; i<a; i++){
        cin>>b>>c;
        p += c;
        p -= b;
        r[i]=p;
    }
    sort(r, r+a);
    cout<<r[a-1];
    return 0;
}
