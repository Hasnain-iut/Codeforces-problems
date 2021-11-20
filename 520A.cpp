#include<iostream>
#include<ctype.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    char s[n];

    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int j=0;j<n;j++){
       s[j] = toupper(s[j]);
    }
    sort(s, s+n);
    int count=1;
    for(int h=1;h<n;h++){
        if(s[h-1]!=s[h]){
            count++;
        }
    }
    if(count==26){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
