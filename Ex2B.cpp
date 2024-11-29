// procedimento por valor
// somatorio n valores

#include <iostream>
 using namespace std;

// Procedimento para calcular e exibir o somat�rio

 int somatorio (int x){ // x � um par�metro (j� declarado no cabe�alho)
   int  s = 0; //inicializa a soma s � uma vari�vel local, precisa ser declarada

   for ( int i=1; i<=x ;i++ ){ //A declara��o int i = 1 � a parte inicial do for. Aqui, a vari�vel i � declarada localmente dentro do escopo do la�o.
     s += i; // adiciona valor i a soma
   }
   cout << s << endl;
 }
 int main (void)
 {
   int n;
   cout << "entre o valor que deseja ver o somatorio:"; cin >> n; // le o valor digitado pelo usuario
   somatorio(n); // chama o procedimento passando valor de n que ser� copiado para variavel x

   return 0;

 }
