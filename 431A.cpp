#include<iostream>
using namespace std;
int main(){
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++){
        int h = s[i] - '0';
        sum+=a[h-1];
    }
    cout<<sum<<endl;
    return 0;
}
