#include <iostream>

using namespace std;

int main(){
    long long firstInput, nextLineInput, i = 1, totSum = 0;

    cin >> firstInput;

    while(i++ <= (firstInput - 1)){
        cin >> nextLineInput;
        totSum += nextLineInput;
    }

    firstInput = (firstInput*(firstInput+1))/2;

    cout << firstInput - totSum << "\n";      
}