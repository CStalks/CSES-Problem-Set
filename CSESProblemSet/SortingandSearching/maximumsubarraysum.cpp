#include <iostream>

using namespace std;

int main(void){
    long n; cin >> n;
    long arr[n];
    long  sum = 0;
    long subArrMax = -1000000000;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++){
        sum = max(arr[i],sum+arr[i]);
        subArrMax = max(subArrMax, sum);
    }
    cout << subArrMax << '\n';
}