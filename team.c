#include<stdio.h>

int main(){
    int numOfProb;
    scanf("%d", &numOfProb);

    int i;
    int j = 0;
    int verdict[numOfProb + 1];
    for(i = 0; i <numOfProb; i++){
        scanf("%d %d %d", &verdict[0], &verdict[1], &verdict[2]);

        if(verdict[0] == 1&& verdict[1]==1){
            j++;
        }else if(verdict[0] == 1&& verdict[2]==1){
            j++;
        }else if(verdict[1] == 1&& verdict[2]==1){
            j++;
        }

    }

    printf("%d", j);

    return 0;
}
