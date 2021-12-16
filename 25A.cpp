#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }

    int count_even = 0;
    int count_odd = 0;
    int lastOdd = -1;
    int lastEven = -1;

    for(int i=0;i<t;i++){
        if(a[i]%2==0){
            count_even++;
        }else{
            lastOdd = i;
        }
    }

    for(int i=0;i<t;i++){
        if(a[i]%2!=0){
            count_odd++;
        }else{
            lastEven = i;
        }
    }

    if(lastOdd != -1 && count_even == t-1){
        cout<<lastOdd+1<<endl;
    }else if(lastEven != -1 && count_odd == t-1){
        cout<<lastEven+1<<endl;
    }
    return 0;
}
