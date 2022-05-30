#include<iostream>
#include<vector>
using namespace std;
typedef long long int lld;
int main(){
    int n,m,k,t;
    cin>>n>>m>>k>>t;

    vector<int> v;

    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        int h = x*4 +1+y;
        v.push_back(h);
    }
    lld arr[t];
    for(int j=0;j<t;j++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        int l = a*4 + 1 + b;
        arr[j] = l;
        v.push_back(l);
    }


}
