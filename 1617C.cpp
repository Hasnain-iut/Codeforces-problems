#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        set<int> set1;
        vector<int> vec;
        for(int i=1;i<=n;i++){
            set1.insert(i);
        }

        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            if(set1.find(x)!=set1.end()){
                set1.erase(x);
            }else{
                vec.push_back(x);
            }
        }
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());
        int flag =0;

        for(auto it=vec.begin();it!=vec.end();it++){
            auto itr = set1.end();

            itr--;
            int f = *itr;
            if(f>(*it-1)/2){
                flag = -1;
                break;
            }
            set1.erase(itr);
        }

        if(flag == 0){
            cout<<vec.size()<<endl;
        }else if(flag == -1){
            cout<<"-1"<<endl;
        }

    }
}
