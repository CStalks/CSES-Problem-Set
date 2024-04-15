#include <iostream>

using namespace std;

int main(void){
    int n; cin >> n;
    int ans = 0;
    string statement = "";

    while(n != 0){
        cin >> statement;
        if(statement.compare("++X") == 0 || statement.compare("X++") == 0) ans++;
        if(statement.compare("--X") == 0 || statement.compare("X--") == 0) ans--;
        n--;
    }
    cout << ans << '\n';
}