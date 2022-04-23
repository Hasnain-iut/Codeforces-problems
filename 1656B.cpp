#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        bool answer = false;
        sort(a, a+n);
        for(int i=0,j=1;i<n &&j<n;){
            if(a[i]+abs(k) == a[j]){
                answer = true;
                break;
            }else if(a[i] + abs(k) < a[j]){
                i++;
            }else{
                j++;
            }
        }

        cout<<(answer==true?"YES" : "NO")<<endl;
    }
}
