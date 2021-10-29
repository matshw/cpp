#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    FILE *arquivo;
    FILE *arquivoler;
    char registro[80], nome[30], matricula[20], nota1[6], nota2[6], nota3[6], nota4[6];
    int i, j;
    float n1, n2, n3, n4, media;

    media = 0;

    arquivo = fopen("aluno.txt", "r");
    arquivoler = fopen("aprovados.txt", "w");

    while(fgets(registro, 80, arquivo) != NULL)
    {
        i = j = 0;
        while(registro[i] != ' ') matricula[j++] = registro[i++];
        matricula[j] = '\0';

        i++;
        j = 0;
        while(!isdigit(registro[i])) nome[j++] = registro[i++];
        nome[j-1] = '\0';

        j = 0;
        while(registro[i] != '\n') nota1[j++] = registro[i++];
        nota1[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != '\n') nota2[j++] = registro[i++];
        nota2[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != '\n') nota3[j++] = registro[i++];
        nota3[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != '\n') nota4[j++] = registro[i++];
        nota4[j] = '\0';

        n1=atof(nota1);
        n2=atof(nota2);
        n3=atof(nota3);
        n4=atof(nota4);

        media = ((n1+n2+n3+n4)/4);

        if(media >= 6.0)
            fputs(matricula,arquivoler);
            fputs(nome,arquivoler);
            fputs(media,arquivoler);
    }

    cout<<endl;

    fclose(arquivo);
    fclose(arquivoler);
}
