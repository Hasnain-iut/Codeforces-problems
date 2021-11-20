#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cin>>num;
    int flag=0, f=1;
    int seq[num];
    for(int i=0;i<num;i++){
        cin>>seq[i];
        if(seq[i]>=seq[i-1]){
            flag++;
            if(flag>f){
                f=flag;
            }
        }else{
            flag=1;
        }
    }
    cout<<f;
    return 0;

}
