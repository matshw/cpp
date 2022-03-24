#include <iostream>

using namespace std;

void imc(float peso, float altura)
{
    float IMC;

    IMC = peso/(altura*altura);

    cout<<"O IMC e: "<<IMC<<endl;
}

int main()
{
    float peso, altura;

    cout<<"Digite o peso: ";
    cin>>peso;

    cout<<"Digite a altura: ";
    cin>>altura;

    imc(peso, altura);
}
