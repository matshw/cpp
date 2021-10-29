#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;

float media (float nota1, float nota2, float nota3, char letra[1])
{
    float media1;

    if (strcmpi(letra,"A") == 0)
    {
        media1 = (nota1 + nota2 + nota3)/3;
    }
    else if (strcmpi(letra,"P") == 0)
    {
        media1 = (((nota1*5) + (nota2*3) + (nota3*2))/10);
    }
    else
        cout<<"Digite um tipo de media valido!";

    return media1;
}
int main()
{
    float nota01, nota02, nota03, m;
    char letra[1];

    cout<<"Digite a letra correspondente ao tipo de media: ";
    gets(letra);
    cout<<"Digite a primeira nota: ";
    cin>>nota01;
    cout<<"Digite a segunda nota: ";
    cin>>nota02;
    cout<<"Digite a terceira nota: ";
    cin>>nota03;

    m = media(nota01, nota02, nota03, letra);

    cout<<m<<endl;

    return 0;
}
