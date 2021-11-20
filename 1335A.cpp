#include<iostream>
using namespace std;
int main(){
//    int num;
//    cin>>num;
//    int s[num];
//    for(int i=0;i<num;i++){
//        cin>>s[i];
//    }
//    int a=0,b=0,count=1;
//    for(int j=0;j<num;j++){
//        if(s[j]<=2){
//            count = 0;
//            cout<<count<<"\n";
//            continue;
//        }
//        a=(s[j]/2) + 1;
//        b=(s[j]/2) - 1;
//        for(int h=0;b>0;h++){
//            a++;
//            b--;
//            count++;
//        }
//        cout<<count<<"\n";
//    }
//    return 0;

    int num;
    cin>>num;
    int s[num];
    for(int i=0;i<num;i++){
        cin>>s[i];
    }
    int n;
    for(int j=0;j<num;j++){
        if(s[j]>2){
            if(s[j]%2==0){
                n = (s[j]/2) - 1;
            }else{
                n = (s[j]/2);
            }
        }else{
            n=0;
        }
        cout<<n<<"\n";
    }

    return 0;
}
