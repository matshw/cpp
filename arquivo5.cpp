#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    FILE *arquivo;
    FILE *arquivoler;
    char registro[70], nome[20], cpf[10], nascimento[10], endereco[20];
    bool ler;
    int i, j;
    arquivo = fopen("pessoa.txt", "r");
    arquivoler = fopen("registrar.txt", "a");


    while(ler==1)
    {
        cout<<"Deseja ler um novo registro? (1 para sim 0 para nao): ";
        cin>>ler;
        while(fgets(registro,70,arquivo) != NULL)
        {
            i = j = 0;
            while(registro[i] != ' ') cpf[j++] = registro[i++];
            cpf[j] = '\0';

            i++;
            j = 0;
            while(!isdigit(registro[i])) nome[j++] = registro[i++];
            nome[j-1] = '\0';

            j = 0;
            while(registro[i] != ' ') nascimento[j++] = registro[i++];
            nascimento[j] = '\0';

            i++;
            j = 0;
            while(registro[i] != ' ') endereco[j++] = registro[i++];
            endereco[j] = '\0';

        }
        fputs(cpf,arquivoler);
        fputs(nome,arquivoler);
        fputs(nascimento,arquivoler);
        fputs(endereco,arquivoler);
    }
    if(ler==0)
        cout<<"Fim do registro.";

    cout<<endl;

    fclose(arquivo);
}
