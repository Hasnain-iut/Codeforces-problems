#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main(){
    int m,n;
    cin>>m>>n;

    vector< pair<int, int> > a;

    int h,k;

    for(int i=0;i<n;i++){
        cin>>h>>k;

        a.push_back(make_pair(h,k));
    }

    sort(a.begin(), a.end(), sortbysec);
    reverse(a.begin(), a.end());
    //for(int i = 0;i<n;i++) cout<< a[i].first<<" "<<a[i].second<<endl;
    int j = 0;
    int x = 0;
    int result = 0;
    while(j<m && x<n){
        if(j+a[x].first<=m){
            result += a[x].second * a[x].first;
            j+=a[x].first;
        }
        else{
            result+=a[x].second * (m-j);
            j+=(m-j);
        }
        x++;
    }

    cout<<result<<endl;
    return 0;
}
