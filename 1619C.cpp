#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    while(t--){
        string a, b;
        cin>>a>>b;

        vector<char> vec1;
        vector<char> vec2;


        for(int i=0;i<b.size();i++){
            int x = a.size();
            if(x<b.size()){
                vec1.push_back('0');
                x++;
            }else{
                vec1.push_back(a[i]);
            }
            vec2.push_back(b[i]);
        }

        for(int j=0;j<vec1.size();j++){
            cout<<vec1[j];

        }
        for(int j=0;j<vec2.size();j++){
            cout<<vec2[j];

        }
    }
}
