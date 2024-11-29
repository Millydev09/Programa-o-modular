//sequencia de fibonacchi
#include <iostream>
using namespace std;

 int fibonacchi( int x){
   int a = 0;
   int b = 1;
   int c;
   for (int i=2; i<=x; i++ ){
     c = a + b;
     a = b;
     b = c;
   }
  cout << c ;
 }
 int main (void){
   int n;
   cout << "entre um valor para contagem na sequencia fibonacci : " ;
   cin >> n;
   fibonacchi (n);
   return 0;
 }
