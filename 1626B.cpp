#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        string n;
        cin>>n;
        int maximum = 0;
        int max_ind =0;

        for(int i=0;i<n.length();i++){
            if(n[i] - '0' >maximum){
                maximum = n[i] - '0';
                max_ind = i;
            }
        }

        int neigh = 0;
        int sec_max_ind = 0;

        if(n[max_ind-1] - '0' > n[max_ind+1] - '0' ){
            neigh = n[max_ind - 1] - '0';
            sec_max_ind = max_ind -1;
        }else {
            neigh = n[max_ind+1] - '0';
            sec_max_ind = max_ind +1;
        }

        int h = neigh +maximum;
        int f = h/10;
        int s = h%10;

        if(sec_max_ind > max_ind){
            if(f!=0)n[max_ind] = f + '0';
            else n.erase(n.begin()+max_ind);
            if(s!=0)n[sec_max_ind] = s + '0';
            else n.erase(n.begin()+sec_max_ind);
        }else{
            if(f!=0)n[sec_max_ind] = f +'0';
            else n.erase(n.begin()+sec_max_ind);
            if(s!=0)n[max_ind] = s + '0';
            else n.erase(n.begin()+max_ind);
        }
        while(*n.begin()== '0'){
            n.erase(n.begin());
        }
        cout<<n<<endl;
    }
}
