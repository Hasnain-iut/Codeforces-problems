
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int m;
    cin>>m;

    int a[100005];
    int count = 0;
    for(int i=1;i<s.size();i++){
        if(s[i] == s[i-1]){
            count++;
        }
        a[i] = count;
    }

    while(m--){
        int x,y;
        cin>>x>>y;

        cout<<a[y-1]-a[x-1]<<endl;
    }

    return 0;
}
