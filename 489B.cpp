#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int> arr1;

    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        arr1.push_back(a);
    }

    sort(arr1.begin(), arr1.end());

    int x;
    cin>>x;
    vector<int> arr2;

    for(int j=0;j<x;j++){

        int b;
        cin>>b;
        arr2.push_back(b);
    }

    sort(arr2.begin(), arr2.end());
    int flag = 0;

    for(int m=0;m<t;m++){
        for(int n=0;n<x;n++){
            if(abs(arr1[m] - arr2[n])<=1){
                flag++;
                arr2[n] = 1000;
                break;
            }
        }
    }
    cout<<flag<<endl;
    return 0;
}



