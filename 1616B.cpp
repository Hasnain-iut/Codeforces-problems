#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(n==1)
        {
            cout<<s<<s<<endl;

        }
        else if(s[0]<=s[1])
        {
            cout<<s[0]<<s[0]<<endl;
        }
        else
        {   int flag =1;
            cout<<s[0];
            for(int i=0;i<n;i++){
                if(i==n-1){
                    break;
                }
                if(s[i+1]<=s[i]){
                    cout<<s[i+1];
                    flag++;
                }else{
                    break;
                }
            }
            for(int i=flag-1;i>=0;i--){
                cout<<s[i];
            }
            cout<<endl;
            }

        }
    }

