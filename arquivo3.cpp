#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    FILE *arquivo;
    FILE *arquivoler;
    char superior[15]= "superior";
    char registro[80], nome[30], cpf[20], rg[10], idade[3], escolaridade[15];
    int i, j;

    arquivo = fopen("prefeitura.txt", "r");
    arquivoler = fopen("censo.txt", "w");

    while(fgets(registro, 80, arquivo) != NULL)
    {
        i = j = 0;
        while(!isdigit(registro[i])) nome[j++] = registro[i++];
        nome[j-1] = '\0';

        j = 0;
        while(registro[i] != ' ') cpf[j++] = registro[i++];
        cpf[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != '\n') rg[j++] = registro[i++];
        rg[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != '\n') idade[j++] = registro[i++];
        idade[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != '\n') escolaridade[j++] = registro[i++];
        escolaridade[j] = '\0';

        if(strcmp(superior,escolaridade) == 0)
            fputs(nome,cpf,rg,idade,arquivoler);
    }

    cout<<endl;

    fclose(arquivo);
    fclose(arquivoler);
}
