#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n,x;
        cin>>n>>x;

        map<int,int> map1;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        int result = n;
        sort(a, a+n);
        for(int i=n-1;i>=0;i--){
            if(map1[a[i]] >0 ){
                result -=2;
                map1[a[i]]--;
            }else{
                long double d1 = x;
                long double d2 = a[i];
                if(d2/d1 == a[i]/x) map1[a[i]/x]++;
            }
        }

        cout<<result<<endl;
    }
}

