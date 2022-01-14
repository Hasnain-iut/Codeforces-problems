#include<iostream>
#include<map>
typedef long long int ll;
using namespace std;

int initialize(map<int,int> map1, int n, int* a){
    static int i = 0;
    if(i==n){
        return 0;
    }else{
        map1[*(a+i++)] = 0;
        initialize(map1, n, a);
    }
}

int final_task(map<int,int> map1,int x, int n, int* a){
    static int j = x-1;
    static int ans =0;
    if(j==0) return 0;
    else{
        if(map1[*(a+j)]==0){
            ans++;
        }
        map1[*(a+j--)]++;
        final_task(map1, x, n, a);
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    while(m--){
        int x;
        cin>>x;
        map<int,int> map1;

        initialize(map1, n, a);

        int ans=0;
        for(int j=n-1;j>=x-1;j--){
            if(map1[a[j]]==0){
                ans++;
            }
            map1[a[j]]++;
        }

        cout<<ans<<endl;
    }

}

