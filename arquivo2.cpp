#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    FILE *arquivo;
    char modelobuscar[30], registro[80], modelo[30], fabricante[20], cor[15], placa[10], valor[10], ano[6];
    int i, j;

    arquivo = fopen("automoveis.txt", "r");

    cout<<"Digite o modelo do carro que deseja buscar: ";
    cin>>modelobuscar;

    while(fgets(registro, 80, arquivo) != NULL)
    {
        i = j = 0;
        while(!isdigit(registro[i])) modelo[j++] = registro[i++];
        modelo[j-1] = '\0';

        j = 0;
        while(registro[i] != ' ') fabricante[j++] = registro[i++];
        fabricante[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != '\n') cor[j++] = registro[i++];
        cor[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != '\n') ano[j++] = registro[i++];
        ano[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != '\n') placa[j++] = registro[i++];
        placa[j] = '\0';

        i++;
        j = 0;
        while(registro[i] != '\n') valor[j++] = registro[i++];
        valor[j] = '\0';

        if(strcmpi(modelobuscar,modelo) == 0)
        cout<<"/n"<<cor<<" "<<ano<<" "<<"R$:"<<valor<<endl;

    }

    cout<<endl;

    fclose(arquivo);
}
