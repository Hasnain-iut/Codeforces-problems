#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,s;
        cin>>a>>s;
        vector<int> v;
        int minus_flag=0;
        while(s){
            minus_flag = 0;
            int x = a%10;
            int y = s%10;

            if((y-x)>=0)v.push_back(y-x);
            else{
                s/=10;
                y+=10*(s%10);
                if((y-x)>=0 && y>=10&& y<=19){
                    v.push_back(y-x);

                }else{
                    cout<<"-1"<<endl;
                    minus_flag=1;
                    break;
                }
            }

            a/=10;
            s/=10;
        }
        if(a!=0 && minus_flag!=1){
            cout<<"-1"<<endl;
            minus_flag = 1;
            continue;
        }else if(minus_flag == 0){
            while(v.back()==0){
                v.pop_back();
            }
            for(int i=v.size()-1;i>=0;i--){
                cout<<v[i];
            }
            cout<<endl;
        }

    }
}
