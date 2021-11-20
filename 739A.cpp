#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int in[num];
    int out[1000];
    for(int i=0;i<num;i++){
        cin>>in[i];
    }

    int k=0, l=1;
    while(k<1000){
        if(l%3!=0 || ){
            out[k] = l;
            k++;
        }
        l++;

    }
    for(int p=0;p<num;p++){
        int x=in[p];
        cout<<out[x-1]<<"\n";
    }
    return 0;
}
