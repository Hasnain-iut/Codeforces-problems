#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    int count=0, j=0;
    getline(cin,s);

    for(int i=0;i<s.length();i++){
       if(s[i]>='a' && s[i]<='z'){
            count++;
       }
    }
    char ch[count];
    for(int k=0;k<s.length();k++){
        if(s[k]>='a' && s[k]<='z'){
            ch[j] = s[k];
            j++;
       }
    }
    sort(ch, ch+count);
    int n=count;
    for(int g=0;g<count;g++){
        if(ch[g] ==ch[g+1]){
            n--;
        }
    }

    cout<<n;
    return 0;
}
