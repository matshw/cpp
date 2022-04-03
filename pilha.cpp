#include <iostream>
using namespace std;
int pilha[100], n=100, topo=-1;
void push(int x) {
   if(topo>=n-1)
   cout<<"Overflow"<<endl;
   else {
      topo++;
      pilha[topo]=x;
   }
}
void pop() {
   if(topo<=-1)
   cout<<"Underflow"<<endl;
   else {
      cout<<"O numero removido foi: "<< pilha[topo] <<endl;
      topo--;
   }
}
void display() {
   if(topo>=0) {
      cout<<"Os numeros da pilha sao:";
      for(int i=topo; i>=0; i--)
      cout<<pilha[i]<<" ";
      cout<<endl;
   } else
   cout<<"pilha está vazia";
}
int main() {
   int opcao, x;
   cout<<"1) Push (Adicionar um numero) "<<endl;
   cout<<"2) Pop (Deletar um numero)"<<endl;
   cout<<"3) Mostrar a pilha"<<endl;
   cout<<"4) Sair"<<endl;
   do {
      cout<<"Digite sua escolha: "<<endl;
      cin>>opcao;
      switch(opcao) {
         case 1: {
            cout<<"Digite o numero que sera adicionado:"<<endl;
            cin>>x;
            push(x);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Fim."<<endl;
            break;
         }
         default: {
            cout<<"Escolha invalida!"<<endl;
         }
      }
   }while(opcao!=4);
   return 0;
}


