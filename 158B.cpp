#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int num, c=0, one=0, two=0;
    cin>>num;
    int group[num];

    for(int i=0;i<num;i++){
        cin>>group[i];
    }

    sort(group, group+num);


    for(int j=0;j<num;j++){
        if(group[j]==4){
            c++;
        }else if(group[j]==1){
            one++;
        }else if(group[j]==2){
            one++;
        }else if(group[j]==1){
            one++;
        }
    }

    cout<<c;
    return 0;

}
