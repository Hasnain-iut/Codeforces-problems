#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    int p,q,r,s;
    sort(arr, arr+4);
    p=arr[0],q=arr[1],r=arr[2],s=arr[3];
    int a=((p-q)+r)/2;
    int b=p-a;
    int c=r-a;
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
