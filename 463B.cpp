#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x = 0;
    int y, result = 0, energy =0;

    for(int i = 1;i<n+1;i++){
        cin>>y;

        energy+=x-y;
        if(energy<0){
            result+= -energy;
            energy = 0;
        }

        x=y;
    }

    cout<<result<<endl;
}
