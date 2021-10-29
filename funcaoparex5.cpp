#include <iostream>

using namespace std;

float IMC(float peso, float altura)
{
    float imc;

    imc = peso/(altura*altura);

    return imc;
}
int main()
{
    float peso, altura, imc;

    cout<<"Digite o peso: ";
    cin>>peso;

    cout<<"Digite a altura: ";
    cin>>altura;

    imc = IMC(peso, altura);

    cout<<imc<<endl;
}
