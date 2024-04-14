#include <iostream>

using namespace std;

int main(){
    int lines; cin >> lines;

    for(int i = 1; i <= lines; i++){
        string word;
        cin >> word;

        if(word.length() <= 10){
            cout << word << "\n";
        }
        else{
            char fchar = word.at(0);
            int length = word.length() - 2;
            char lchar = word.at(word.length()-1);

            cout << fchar <<length << lchar<< "\n";
        }  
    }
}