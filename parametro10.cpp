#include <iostream>

using namespace std;

float aumento(int codigo, float salario)
{
    float salarioa;

    if(codigo == 91)
    {
        salarioa = salario+(salario*(10/100));
    }
    if(codigo == 92)
    {
        salarioa = salario+(salario*(20/100));
    }
    if(codigo == 93)
    {
        salarioa = salario+(salario*(30/100));
    }
    else
    {
       salarioa = salario+(salario*(35.5/100));
    }

    return salario;
}
int main()
{
    int codigo1;
    float salario1, s;

    cout<<"Digite o codigo do funcionario: ";
    cin>>codigo1;

    cout<<"Digite o salario do funcionario: ";
    cin>>salario1;

    s = aumento(codigo1, salario1);

    cout<<s<<endl;
}
