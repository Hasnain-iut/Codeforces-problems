#include<iostream>
using namespace std;

void sorting(int x[], int y[], int n){
    if (n==0){
        return;
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(x[i]>x[max]){
           max=i;
        }
    }
    int temp=x[n-1];
    x[n-1] = x[max];
    x[max] = temp;

    int temp2=y[n-1];
    y[n-1] = y[max];
    y[max]=temp2;
    sorting(x,y,n-1);
}

int main(){
    int strength,n;
    cin>>strength>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }

    sorting(x,y,n);
    for(int i=0;i<n;i++){
        if(strength>x[i]){
            strength+=y[i];
        }else{
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;

}
