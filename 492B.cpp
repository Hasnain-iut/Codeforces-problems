#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    int a[n+2];
    a[0] = 0;
    for(int i = 1; i<n+1;i++){
        cin>>a[i];
    }
    a[n+1] = l;

    sort(a, a+n+2);

    int difference[n+1];
    int highest_value = 0;
    for(int i = 0;i<n+1;i++){
        difference[i] = abs(a[i] - a[i+1]);

        if(i==0 || i==n){
            difference[i] *=2;
        }

        if(difference[i]>highest_value){
            highest_value = difference[i];
        }
    }

    double answer = (highest_value/2.0f);
    printf("%.8lf", answer);
}
