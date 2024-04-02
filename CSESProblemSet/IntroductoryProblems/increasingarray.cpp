#include <iostream>

using namespace std;

int main(){
    long long arrSize, minNumOfMoves = 0;
    cin >> arrSize;
    int arr[arrSize];

    for(int i = 0; i < arrSize; i++) cin >> arr[i];

    for(int i = 0; i < arrSize - 1; i++){
        if(arr[i + 1] < arr[i]){
            minNumOfMoves += arr[i] - arr[i+1];
            arr[i+1] = arr[i]; 
        }
    }
    cout << minNumOfMoves << "\n";


}