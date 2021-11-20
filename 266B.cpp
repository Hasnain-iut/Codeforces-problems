#include<iostream>
using namespace std;


int main(){
    int num,sec;
    string s;
    cin>>num>>sec;
    cin>>s;

    for(int j=0; j<sec; j++){
        for(int i=0; i<num; i++){
           if(s[i] == 'B' && s[i+1] == 'G'){
                s[i] = 'G';
                s[i+1] = 'B';
                i+=1;
           }
        }
    }
    cout<<s;
    return 0;
}

