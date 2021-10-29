#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;

float menormaior(int v[5])
{
    int maiorvalor, menorvalor, i;

    maiorvalor = 0;

    for(i=0;i<=5;i++)
    {
        cout<<"Digite um numero: ";
        cin>>v[i];
        if(v[i] > maiorvalor)
            maiorvalor = v[i];
        if(v[i] < menorvalor)
            menorvalor = v[i];
    }

    cout<<"O maior valor e: "<<maiorvalor<<endl;
    cout<<"O menor valor e: "<<menorvalor<<endl;
}
int main()
{
    int m;
    int v[5];
    m = menormaior(v);

    cout<<m<<endl;
}
