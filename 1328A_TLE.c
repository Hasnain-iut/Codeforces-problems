#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    long long int a,b;
    int k,l;
    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%lld %lld", &a, &b);
        if(a==b|| a%b==0){
                l=0;
        }else{
                if(a>b){
                k=a/b;
                l=(k+1)*b - a;
                }
                else if(a<b){
                l=b-a;
                }
        }
        arr[i] = l;
    }
    for(int j=0;j<t;j++){
        printf("%d\n", arr[j]);
    }
    return 0;
}
