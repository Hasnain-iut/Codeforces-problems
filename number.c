#include<stdio.h>
int main(){

    int i = 0;
    int sum =0;
    while(i<=600){
        if((i%7 == 0) && (i%9 ==0)){
            sum +=i;
        }
        i++;
    }
    printf("%d", sum);
    return 0;
}
