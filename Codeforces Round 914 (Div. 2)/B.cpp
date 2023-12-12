#include<bits/stdc++.h>
using namespace std;

// int smol(int arr[],int size)
// {
//   int small=INT_MAX;

//   for(int ri=0;ri<size;ri++)
//   {
//     if(small>arr[ri])
//     {
//       small=arr[ri];
//     }
//   }
//   return small;
// }

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
        for(int i=0; i<n; i++){
            int count=0;
            int b=a[i];
            a[i]=0;
            sort(a,a+n);
            for(int j=1;j<n;j++){
                if(a[j] <= b){
                    b = b+a[j];
                    count++;
                }
                else{
                    break;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}
