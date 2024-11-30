#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Função auxiliar para formatar números com pontos a cada 3 dígitos
string formatNumber (int number){
  string numStr = to_string(number);
  string formatted = "";
  int count =0;
  for (int i = numStr.size() - 1; i >= 0; i--) {
        formatted = numStr[i] + formatted;
        count++;
        if (count == 3 && i != 0) { // Adiciona ponto a cada 3 dígitos, exceto no início
            formatted = "." + formatted;
            count = 0;
        }
    }
    return formatted;


}
 void potencia (int b,int e)
 {
   cout << setprecision(2) << fixed << right;
  int r=1;
   for ( int i=1;i<=e;i++){
     r *= b;
   }

   cout << " A potencia de " << b
   << " elevado ao expoente " <<  e
   << " resulta em : " << formatNumber(r)<< endl;
 }
 int main (void)
 {
  int base, expoente;
    cout << "entre o valor da base : " ;
    cin >> base;
    cout << "entre o valor do expoente : " ;
    cin >> expoente;
    potencia (base,expoente);
    return 0;
 }

