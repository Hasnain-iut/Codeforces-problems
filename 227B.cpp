#include<iostream>
using namespace std;
typedef long long int lld;

int main(){
    int n;
    int m;

    cin>>n;
    int a;
    int pos[10001];
    for(int i = 0;i < n;i++){
        cin>>a;
        pos[a] = i+1;
    }

    cin>>m;

    lld vasya = 0;
    lld petya = 0;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        vasya += pos[x];
        petya += n-pos[x]+1;
    }

    cout<<vasya<<" "<<petya<<"\n";

    return 0;
}
