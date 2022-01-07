#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int n,m;
    map<string, string> map1;
    cin>>n>>m;
    while(m--){
        string a,b;
        cin>>a>>b;
        map1[a] = b;
    }

    while(n--){
        string s;
        cin>>s;
        string x,y;
        x = s;
        y = map1[s];
        if(x.size()>y.size()){
            cout<<y<<" ";
        }else{
            cout<<x<<" ";
        }
    }
    return 0;
}
