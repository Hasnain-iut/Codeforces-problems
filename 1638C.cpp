#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        set<int> s;
        s.insert(0);

        for(int i=1;i<=n;i++) s.insert(i*-1);

        int ans = 0, target =n, maxa = n, last=n;
        for(int i=n-1;i>=0;i--){
            s.erase(-1*a[i]);

            if(a[i] == target){
                int k = (-1)*(*s.begin());
                if(k==(maxa-(last-i))){
                   ans++, maxa=k, target =k, last = i;
                }else{
                    target = k;
                }
            }
        }


        cout<<ans<<endl;
    }
}
