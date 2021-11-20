#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int arr[5];

    arr[0] = a+b*c;
    arr[1] = (a+b)*c;
    arr[2] = a*b*c;
    arr[3] = a*(b+c);
    arr[4] = a+b+c;

    sort(arr, arr+5);
    cout<<arr[4];
    return 0;

}
