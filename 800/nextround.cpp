#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int kth_place; cin >> kth_place;
    int ptps,ans = 0;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> ptps;
        arr[i] = ptps;
    } 

    for(int i = 0; i < n; i++){
        if((arr[i] > 0) && (arr[i] >= arr[kth_place - 1])){
        ans++;
        } else break;
    }
    cout << ans << '\n';
}