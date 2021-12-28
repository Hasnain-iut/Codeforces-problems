#include<iostream>
#include<algorithm>
using namespace std;

int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else
       return n1;
}
int high(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        if(n==2){
            if(a[0]!=a[1]){
                cout<<high(a[0], a[1]);}
            else{
               cout<<"0"<<endl;
            }
            continue;
        }

        if(n==3){
            long long int f= hcf(a[0], a[2]);
            if(a[1]%f!=0){
                cout<<f<<endl;
            }else{
                cout<<"0"<<endl;
            }
            continue;
        }
        long long int d,e;
        d = hcf(a[0], a[2]);
        for(int i=0;i<n-2;i+=2){
            e = hcf(a[i], a[i+2]);
            if(d!=e || a[i+1]%d ==0){
                d=0;
                break;
                continue;
            }
        }

        long long x,g;
        x = hcf(a[1], a[3]);
        for(int j=1;j<n-2;j+=2){
            g = hcf(a[j], a[j+2]);
            if(x!=g || a[j+1]%x ==0){
                g=0;
                break;
                continue;
            }
        }


        if(g!=0){
            cout<<g<<endl;
        }else if(d!=0){
            cout<<d<<endl;
        }else {
            cout<<"0"<<endl;
        }
    }
}
