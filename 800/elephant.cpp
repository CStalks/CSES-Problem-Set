#include <iostream>

using namespace std;

int main(){
    int x; cin >> x;
    int arr[5] = {1,2,3,4,5};
    int count = 0;

    while(x){
        if(x >= 5){
            count++;
            x -= 5;
        } else if(x >= 4){
            count++;
            x -= 4;
        } else if(x >= 3){
            count++;
            x -= 3;
        } else if(x >= 2){
            count++;
            x -= 2;
        } else if(x >= 1){
            count++;
            x -= 1;
        }

    }
    cout << count << '\n';
}