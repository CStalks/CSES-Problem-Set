#include <iostream>

using namespace std;

int main(){
   int n,row,col;

   for(int i = 1; i <= 5; i++){
      for(int j = 1; j <= 5; j++){
         cin >> n;
         if(n == 1){
            row = i;
            col = j;
            break;
         }
      }
   }
   cout <<abs(3-row)+abs(3-col)<< '\n';
}