#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a;
    cin>>a;

    char qwerty[] = {"qwertyuiopasdfghjkl;zxcvbnm,./"};

    char name[101];
    scanf("%s", name);
    if(a == 'R'){
        for(int i=0;i<strlen(name);i++){
            for(int j=0;j<strlen(qwerty);j++){
                if(name[i] == qwerty[j]){
                    printf("%c", qwerty[j-1]);
                    break;
                }
            }
        }
        printf("\n");
    }else if(a == 'L'){
        for(int i=0;i<strlen(name);i++){
            for(int j=0;j<strlen(qwerty);j++){
                if(name[i] == qwerty[j]){
                    printf("%c", qwerty[j+1]);
                    break;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
