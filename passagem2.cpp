#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;

int main ()
{

FILE *p;
p = fopen ("exemplo.txt","w");
if (p == NULL)

cout << "Erro na abertura do arquivo. Fim de programa!";

else

cout << "\nArquivo Criado com Sucesso!\n";

return 0;

}
