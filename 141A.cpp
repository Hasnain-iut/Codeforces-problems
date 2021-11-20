#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2, s, s3;
    int isSame = 1;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    s=s1+s2;
    int h=s.length();
    sort(s.begin(), s.end());
    sort(s3.begin(), s3.end());

    if(s.length()!=s3.length()){
        cout<<"NO";
        return 0;
    }

    for(int i=0;i<h;i++){
        if(s[i] !=s3[i]){
            isSame = 0;
            break;
        }
    }

    if(isSame == 1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
