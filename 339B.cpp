#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    int house=1;
    long long int count =0;

    for(int j=0;j<m;j++){
        int a;
        cin>>a;
        if(a>house){
            count+= a-house;
        }else if(a<house) {
            count+= n-(house-a);
        }

        house=a;
    }


    cout<<count;
    return 0;
}
