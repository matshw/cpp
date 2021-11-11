#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    FILE *arquivo;
    char registro[70], nome[30], nomevelho[30], idade[3], identidade[10];
    int i, j, idade1, velho, estudanteslidos;

    arquivo = fopen("aluno.txt", "r");
    velho = 0;
    estudanteslidos = 0;

    while(fgets(registro,70,arquivo) != NULL)
    {
        i = j = 0;

        while(registro[i] != ' ') identidade[j++] = registro[i++];
        identidade[j] = '\0';

        i++;
        j = 0;
        while(!isdigit(registro[i])) nome[j++] = registro[i++];
        nome[j-1] = '\0';

        j = 0;
        while(registro[i] != '\n') idade[j++] = registro[i++];
        idade[j] = '\0';


        idade1 = atof(idade);

        if(idade1>velho)
        {
            velho = idade1;
            strcpy(nome, nomevelho);
        }

        estudanteslidos = estudanteslidos + 1;
    }

    cout<<"Numero de estudantes lidos:"<<estudanteslidos<<"idade do mais velho: "<<velho<<"Nome do mais velho: "<<nomevelho<<endl;

    cout<<endl;

    fclose(arquivo);
}
