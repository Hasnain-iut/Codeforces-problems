#include<iostream>
using namespace std;
int main(){
    int num, sum=0;
    cin>>num;
    string s[num];

    for(int j=0;j<num;j++){
        cin>>s[j];
    }

    for(int i=0;i<num;i++){
        if(s[i]=="Tetrahedron"){
            sum+=4;
        }else if(s[i] == "Cube"){
            sum+=6;
        }else if(s[i] == "Octahedron"){
            sum+=8;
        }else if(s[i] == "Dodecahedron"){
            sum+=12;
        }else if(s[i] == "Icosahedron"){
            sum+=20;
        }
    }

    cout<<sum;
    return 0;
}
