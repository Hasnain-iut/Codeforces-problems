#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int pres_1 = 0;
        int a[n];
        for(int i=0;i<n;i++){

            cin>>a[i];
            if(a[i]==1){
                pres_1 = 1;
            }
        }
        int answer = 1;
        sort(a, a+n);

        if(pres_1){
            for(int i = 0;i<n-1;i++){
                if(a[i]+1 == a[i+1] ){
                    answer = 0;
                    break;
                }
            }
        }
        cout<<(answer? "YES" : "NO")<<endl;
    }
}
