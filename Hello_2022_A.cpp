#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int flag =0;
        if(n%2==0){
            if(k<=n/2){
               for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        if(i%2==0 && j%2==0 && i==j && flag!=k){
                            cout<<"R";
                            flag++;
                        }else{
                            cout<<".";
                        }
                    }
                    cout<<endl;
               }
            }else{
                cout<<"-1"<<endl;
            }
        }else if(n%2!=0){
            int h = n-((n-1)/2);
            if(k<=h){
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        if(i%2==0 && j%2==0 && i==j && flag!=k){
                            cout<<"R";
                            flag++;
                        }else{
                            cout<<".";
                        }
                    }
                    cout<<endl;
               }
            }else{
                cout<<"-1"<<endl;
            }
        }
    }
}
