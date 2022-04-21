#include<iostream>
using namespace std;

int main(){
    int n,m;
    char p;
    cin>>n>>m>>p;


    char a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int alpha[26] = {0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == p){
                if(i>0 && a[i-1][j]!='.'){          //up
                    alpha[a[i-1][j]-'A'] = 1;
                }if(i<n-1 && a[i+1][j] != '.' ){    //down
                    alpha[a[i+1][j] - 'A'] = 1;
                }if(j>0 && a[i][j-1]!= '.'){        //left
                    alpha[a[i][j-1] - 'A'] = 1;
                }if(j<m-1 && a[i][j+1] != '.'){     //right
                    alpha[a[i][j+1] - 'A'] = 1;
                }
            }
        }
    }
//    for(int i=0;i<26;i++){
//        cout<<alpha[i]<<",";
//    }
    int result = 0;
    int h = p;
    h-=65;
    for(int i=0;i<26;i++){
        if(alpha[i] == 1 && i != h){
            result++;
        }
    }

    cout<<result<<endl;
}
//1 10 H
//....DDHHHH
