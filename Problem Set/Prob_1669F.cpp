#include<bits/stdc++.h>
using namespace std;

void cin_array(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        int c[n];
        cin_array(c, n);
        
        int left = 0, right = n - 1;
        int sum_left = 0, sum_right = 0;
        int max_candies_eaten = 0;

        while(left <= right){
            if(sum_left < sum_right){
                sum_left += c[left];
                left++;
            }
            else if(sum_right < sum_left){
                sum_right += c[right];
                right--;
            }
            else { // sum_left == sum_right
                max_candies_eaten = max(max_candies_eaten, left + (n - right - 1));
                sum_left += c[left];
                left++;
            }
        }

        cout << max_candies_eaten << endl;
    }

    return 0;
}