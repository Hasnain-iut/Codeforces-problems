#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int first_condition = 0;
    int second_condition = 0;
    int count_1 = 0;
    int count_2 = 0;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<b && first_condition == 0){
            count_1++;
            first_condition = 1;
        }else if(a>b && second_condition == 0){
            count_2++;
            second_condition = 1;
        }

    }
    if(count_1 == 1 && count_2 == 1){
        cout<<"Happy Alex";
    }else {
        cout<<"Poor Alex";
    }
    return 0;
}
