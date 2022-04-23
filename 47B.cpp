#include<iostream>
#include<map>
using namespace std;
int main(){
    string a1[3] = {};

    for(int i=0;i<3;i++){
        cin>>a1[i];
    }


    map<char,int> map1;

    map1['A'] = 0;
    map1['B'] = 0;
    map1['C'] = 0;

    for(int i=0;i<3;i++){
        if(a1[i][1] == '>'){
            map1[a1[i][0]]++;
            map1[a1[i][2]]--;
        }else{
            map1[a1[i][0]]--;
            map1[a1[i][2]]++;
        }
    }

    if(map1['A']>map1['B'] && map1['B']>map1['C']){
        cout<<"CBA"<<endl;
    }else if(map1['A']>map1['C'] && map1['C']>map1['B']){
        cout<<"BCA"<<endl;
    }else if(map1['C']>map1['B'] && map1['B']>map1['A']){
        cout<<"ABC"<<endl;
    }else if(map1['B']>map1['A'] && map1['A']>map1['C']){
        cout<<"CAB"<<endl;
    }else if(map1['C']>map1['A'] && map1['A']>map1['B']){
        cout<<"BAC"<<endl;
    }else if(map1['B']>map1['C'] && map1['C']>map1['A']){
        cout<<"ACB"<<endl;
    }else{
        cout<<"Impossible"<<endl;
    }
}
