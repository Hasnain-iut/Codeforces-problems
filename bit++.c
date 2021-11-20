#include<stdio.h>
int main(){

    int input;
    scanf("%d", &input);
    int i=0;
    int x=0;
    char c[input+1];

    for(i=0; i<input; i++){
        scanf("%s", &c);
        if(strcmp(c, "++X") ==0 || strcmp(c, "X++") ==0){
                x++;
          }
          else if(strcmp(c, "--X") ==0 || strcmp(c, "X--") ==0){
                x=x-1;
          }
   }

    printf("%d", x);

    return 0;
}
