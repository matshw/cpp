#include <iostream>

using namespace std;

float reajuste(int tempo, float salario)
{
    if(tempo < 10)
        salario = salario + (salario*0.10);
    else
        salario = salario + (salario*0.15);

    return salario;
}
int main()
{
    int tempo;
    float salario, s;

    cout<<"Digite o tempo de trabalho: ";
    cin>>tempo;

    cout<<"Digite o salario: ";
    cin>>salario;

    s = reajuste(tempo, salario);

    cout<<s<<endl;
}
