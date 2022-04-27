#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> prime;

    for(int i=0;i<n;i++){
        int f;
        cin>>f;
        prime.push_back(f);
    }

    vector<int> sorted,rev;
    sorted = prime;
    sort(sorted.begin(), sorted.end());
    rev = prime;
    reverse(rev.begin(), rev.end());

    if(prime == sorted){
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return 0;
    }
    else if(rev == sorted){
        cout<<"yes"<<endl;
        cout<<"1 "<<n<<endl;
        return 0;
    }

    int l = 0;
    int r = n;
    for(int i=0;i<n;i++){
        if(prime[i]!=sorted[i]){
            l = i;
            break;
        }
    }

    int found = 1;

    for(int i=n-1;i>l;i--){
        if(prime[i]!=sorted[i]){
            r = i;
            break;
        }
    }

    reverse(prime.begin()+l, prime.begin()+r+1);

    if(prime == sorted){
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
    }else{
        cout<<"no"<<endl;
    }

    return 0;
}
