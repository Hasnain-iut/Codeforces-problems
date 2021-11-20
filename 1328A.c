#include<stdio.h>
int main(){

    int t;
    scanf("%d", &t);
    long long int a,b;
    int c=0;
    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%lld %lld", &a, &b);
        if(a%b!=0){
            a++;
            c++;
            while(1){
                if(a%b==0){
                    break;
                }
                a++;
                c++;
            }
        }

        arr[i] = c;
        c=0;
    }
    for(int j=0;j<t;j++){
        printf("%d\n", arr[j]);
    }
    return 0;

}
