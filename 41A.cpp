#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1, s2;
    int a=0;
    cin>>s1;
    cin>>s2;

    for(int i=0;i<s1.size(); i++){
        if(s1[i]==s2[s2.size()-i-1]){
            a++;
        }
    }

    if(a==s1.size()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
