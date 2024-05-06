#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long n,x;
    cin >> n; cin >> x;
    int arr[n];
    int* left;
    int* right;
    int count = 0;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr+n);

    left = arr;
    right = &arr[n-1];

   while(left <= right){
    if((left != right) && (*left + *right > x)){
        count++;
        right--;
    } else {
        count++;
        right--;
        left++;
    }
   }
   cout << count << '\n';
    
}