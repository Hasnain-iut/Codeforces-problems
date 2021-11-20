#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[101];
    cin>>s;
    int flag=0, allup=0;

    for(int i=0;i<strlen(s); i++){
        if(isupper(s[0]) || islower(s[i+1])){
            flag++;
        }
        if(isupper(s[i])){
            allup+=1;
        }
    }
    if(flag==0){
            s[0] = toupper(s[0]);
        for(int j=1;j<strlen(s);j++){
            s[j]=tolower(s[j]);
        }
    }
    else if(allup==strlen(s)){
        for(int k=0;k<strlen(s);k++){
            s[k]=tolower(s[k]);
        }
    }

    cout<<s;
    return 0;
}
