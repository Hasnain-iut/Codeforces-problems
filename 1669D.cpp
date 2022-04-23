#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stringstream ss(s);
        string js;
        vector<string> v1;

        while(getline(ss, js, 'W')){
            if(js!=""){
                v1.push_back(js);
            }

        }

//        int count=0;
//        for(auto x:v1){
//            cout<<x<<endl;
//            count++;
//        }
//        cout<<count<<endl;

        int h = 0;
        for(int i =0;i<v1.size();i++){
            string l;
            l = v1[i];
            int b_found = 0;
            int r_found = 0;

            for(int j=0;j<l.length();j++){
                if(b_found == 0 && l[j] == 'B'){
                    b_found = 1;
                }else if(r_found == 0 && l[j] == 'R'){
                    r_found = 1;
                }

                if(b_found == 1 && r_found ==1){
                    h++;
                    break;
                }
            }
        }
        ((h==v1.size()) ? cout<<"YES"<<endl : cout<<"NO"<<endl);
    }
}
