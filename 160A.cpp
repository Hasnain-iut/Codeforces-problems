#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,sum=0,num=1,c=0;
    int b[100];
    cin>>a;

    for(int i=0;i<a;i++){
        cin>>b[i];
    }

    sort(b, b+a, greater<int>());

    for(int j=0;j<a;j++){
        sum+=b[j];
    }

    int mean=sum/2;

    for(int k=0;k<a;k++){
        c+=b[k];
        if(c>mean){
            break;
        }
        else{
            num++;
        }
    }

    cout<<num;
    return 0;
}
