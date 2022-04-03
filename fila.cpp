#include <iostream>
using namespace std;
int fila[100], n = 100, fim = 0, inicio = 0;
void Enqueue() {
   int x;
   if (inicio == n - 1)
   cout<<"Overflow"<<endl;
   else {
      if (fim == 0)
      fim = 1;
      cout<<"Qual numero deseja colocar na fila? "<<endl;
      cin>>x;
      inicio++;
      fila[inicio] = x;
   }
}
void Dequeue() {
   if (fim == 0 || fim > inicio) {
      cout<<"Underflow ";
      return ;
   } else {
      cout<<"O numero deletado da fila foi: "<< fila[fim] <<endl;
      fim++;;
   }
}
void Mostrar() {
   if (fim == 0)
   cout<<"fila está cheia"<<endl;
   else {
      cout<<"Os numeros da fila sao: ";
      for (int i = fim; i <= inicio; i++)
      cout<<fila[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int opcao;
   cout<<"1) Coloca um numero na fila"<<endl;
   cout<<"2) Deleta um numero da fila"<<endl;
   cout<<"3) Mostra os numeros da fila"<<endl;
   cout<<"4) Sair"<<endl;
   do {
      cout<<"Digite sua escolha: "<<endl;
      cin>>opcao;
      switch (opcao) {
         case 1: Enqueue();
         break;
         case 2: Dequeue();
         break;
         case 3: Mostrar();
         break;
         case 4: cout<<"Fim."<<endl;
         break;
         default: cout<<"Escolha invalida"<<endl;
      }
   } while(opcao!=4);
   return 0;
}


