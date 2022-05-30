#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int lld;

int minlld(lld a, lld b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main(){
    int n,f;
    cin>>n>>f;

    int k[n], l[n];

    vector<pair<lld, lld>> m;

    for(int i=0;i<n;i++){
        cin>>k[i]>>l[i];

        m.push_back(make_pair(i, min(k[i], l[i])));
    }

    sort(m.begin(), m.end(), sortbysec);

    for(int i=0;i<f;i++){
        lld h = minlld(2*m[n-i-1].second, l[m[n-i-1].first]);
        m[n-i-1].second = h;
    }

    lld sum = 0;

    for(auto x: m){
        sum+=x.second;
    }
    cout<<sum<<endl;
}
