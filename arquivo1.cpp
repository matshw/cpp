#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

main( )
{
    FILE *arquivo;
    char registro[50], codigo[10], descricao[20], estoque[10], preco[10];
    int i, j, qtde;

    //Abrindo o arquivo em modo "somente leitura"
    arquivo = fopen("informatica.txt", "r");

    cout<<"\nProdutos com mais de 100 unidades em estoque: "<<endl;

    //Enquanto não for fim de arquivo o looping será executado
    while(fgets(registro, 50, arquivo) != NULL)
    {
        i = j = 0;
        while(registro[i] != ' ') codigo[j++] = registro[i++]; //Extraindo o códido
        codigo[j] = '\0';

        i++;
        j = 0;
        while(!isdigit(registro[i])) descricao[j++] = registro[i++]; //Extraindo a descrição
        descricao[j-1] = '\0';

        j = 0;
        while(registro[i] != ' ') estoque[j++] = registro[i++]; //Extraindo a quantidade em estoque
        estoque[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != '\n') preco[j++] = registro[i++]; //Extraindo o preço
        preco[j] = '\0';

        qtde = atoi(estoq); //Convertendo a quantidade em estoque para inteiro
        if(qtde > 100) //Mostrando os produtos com mais de 100 unidades em estoque
            cout<<"\n"<<codigo<<" "<<descricao<<" "<<"R$:"<<preco;
    }

    cout<<endl;
    //Fechando o arquivo
    fclose(arquivo);
}
