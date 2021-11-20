#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[101];
    string s;
    int j = 0;

    cin>>s;
    for(int i=0; i<s.size(); i++){
            if(s[i]=='+'){
                continue;
            }else{
                a[j]=s[i]-'0';
                j++;
            }

    }
    sort(a, a+j);

    for(int i=0;i<j;i++){
        cout<<a[i];
        if(i==j-1){
            break;
        }
        cout<<"+";
    }



    return 0;
}
