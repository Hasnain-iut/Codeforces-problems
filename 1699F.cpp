#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch(int arr[], int x, int low, int high) {

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int a[n+1];
        a[0] = 0;
        int sum[n];
        int reverse_sum[n];
        int s = 0;

        for(int i=1;i<n+1;i++){
            cin>>a[i];
            s += a[i];
            sum[i-1]= s;
        }
        int y = 0;
        for(int i=1;i<n+1;i++){
            y+=a[n+1-i];
            reverse_sum[i-1]= y;
        }

        int i = n-2;
        int result = 0;

        while(i>=0){
            int s = sum[i];

            int x = binarySearch(reverse_sum, s, 0, n-i-2);
            if(x!=-1){
                result = i+x+2;
                break;
            }
            i--;
        }


        cout<<result<<endl;
    }
}
