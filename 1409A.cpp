#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int result[num], j, moves=0;
    for(int i=0;i<num;i++){
        int x=0;
        moves =0;
        int a,b,y=0;
        cin>>a>>b;
        if(a>b){
            y=a-b;
           if(y<=10){
            moves+=1;
           }else{
            x=y/10;
            moves+=x;
            if(y%10){
                moves+=1;
            }
           }
        }else if(a<b){
            y=b-a;
            if(y<=10){
            moves+=1;
           }else{
            x=y/10;
            moves+=x;
            if(y%10){
                moves+=1;
            }
           }
        }
        result[i] = moves;
    }

    for(int h=0;h<num;h++){
        cout<<result[h]<<endl;
    }

    return 0;
}
