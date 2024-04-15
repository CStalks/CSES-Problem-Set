#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int petya,vasya,tonya,ans = 0;

    for(int i = 1; i <= n; i++){
        cin>>petya;cin>>vasya;cin>>tonya;
        if((petya+vasya+tonya) >= 2) ans++;
    }
    cout << ans << "\n";
   
}