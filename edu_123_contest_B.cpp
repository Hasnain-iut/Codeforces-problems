#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=1; i<=n; i++)
        {
            a[i-1] = i;
        }

        reverse(a, a+n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        int k = n-1;
        int j = n-1;
        while(k--){
            swap(a[j], a[j-1]);
            for(int p = 0;p<n;p++){
                cout<<a[p]<<" ";
            }
            cout<<endl;
            j--;
        }

    }
}
