#include <iostream>

using namespace std;

int main(){
    int n; cin>>n;

    while(n--){
        int a; cin>>a;
        int b; cin>>b;
        int c; cin>>c;

        if(a+b == c){
            cout << "YES" << '\n';
        } else if(b+c == a){
            cout << "YES" << '\n';   
        } else if(a+c == b){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}