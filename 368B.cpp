#include<iostream>
#include<set>
typedef long long int ll;
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    set<int> set1;
    int a[n];
    for(int j=0;j<n;j++){
        cin>>a[j];
    }

    int b[n];

    for(int i=n-1;i>=0;i--){

        set1.insert(a[i]);
        b[i]=set1.size();
    }

    int l;
    for(int i=0;i<m;i++){
        cin>>l;
        cout<<b[l-1]<<endl;
    }

    return 0;
}
