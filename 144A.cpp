#include<iostream>
using namespace std;
int main(){
    int num, a;
    int max_value=0,min_value=101, maxind=0,minind=0;
    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>a;
        if(a>max_value){
            max_value=a;
            maxind=i;
        }
        if(a<=min_value){
            min_value=a;
            minind=i;
        }
    }

    if(maxind>minind){
        cout<<(maxind-1) + (num-minind) -1;
    }else{
    cout<<(maxind-1) + (num - minind);
    }
    return 0;

}
