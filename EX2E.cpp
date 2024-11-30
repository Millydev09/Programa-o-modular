#include <iostream>
using namespace std;

 void parOuImpar (int num){
 int  r = num - 2 * (num/2);
   if(r==0){
     cout << "par " << endl;
   }
   else {
     cout << "impar" << endl;
    }
}

int main (void)
{
  int n;
  cout << "entre um numero :  " << endl;
  cin >> n;
  parOuImpar(n);
  return 0;
}

