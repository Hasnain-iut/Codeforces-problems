#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

typedef long long int lld;
int main()
{
    int n;
    cin>>n;

    lld sum = 0;
    int p[n];

    map<lld, lld> unsorted_map;
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
        sum+=p[i];
        unsorted_map[i+1] = sum;
    }
    unsorted_map.insert(pair<lld, lld>(0, 0));

    sort(p, p+n);

    map<lld, lld> sorted_map;

    lld sort_sum = 0;
    for(int i=0; i<n; i++)
    {
        sort_sum+=p[i];
        sorted_map[i+1] = sort_sum;
    }
    sorted_map.insert(pair<lld, lld>(0, 0));

    int m;
    cin>>m;
    int a,b,c;
    for(int i = 0;i<m;i++){
        cin>>a>>b>>c;

        if(a==1){
            cout<<unsorted_map[c] - unsorted_map[b-1]<<endl;
        }else if(a==2){
            cout<<sorted_map[c] - sorted_map[b-1]<<endl;
        }

    }
}
