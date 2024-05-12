#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[3];
    int ans = 0;


    for(int i = 0; i < 3; i++)
        cin>>arr[i];

    sort(arr,arr+3);
    
    for(int i = 0; i < 3; i++){
        if(arr[i] != arr[1])
            ans += abs(arr[i]-arr[1]);
    }
    cout << ans << '\n';
}