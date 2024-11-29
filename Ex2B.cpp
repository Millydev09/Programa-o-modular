// procedimento por valor
// somatorio n valores

#include <iostream>
 using namespace std;

// Procedimento para calcular e exibir o somatório

 int somatorio (int x){ // x é um parâmetro (já declarado no cabeçalho)
   int  s = 0; //inicializa a soma s é uma variável local, precisa ser declarada

   for ( int i=1; i<=x ;i++ ){ //A declaração int i = 1 é a parte inicial do for. Aqui, a variável i é declarada localmente dentro do escopo do laço.
     s += i; // adiciona valor i a soma
   }
   cout << s << endl;
 }
 int main (void)
 {
   int n;
   cout << "entre o valor que deseja ver o somatorio:"; cin >> n; // le o valor digitado pelo usuario
   somatorio(n); // chama o procedimento passando valor de n que será copiado para variavel x

   return 0;

 }
