#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cin>>s;
    string g = s;

    reverse(s.begin(), s.end());
    cout<<g+s<<endl;
}
