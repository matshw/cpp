#include <iostream>

using namespace std;

int horario(int horas, int minutos, int segundos)
{
    int segundos1;

    horas = (horas*3600);

    minutos = (minutos*60);

    segundos1 = horas + minutos + segundos;

    return segundos1;
}
int main()
{
    int horas, segundos, minutos, s;

    cout<<"Digite o numero de horas: ";
    cin>>horas;
    cout<<"Digite o numero de minutos: ";
    cin>>minutos;
    cout<<"Digite o numero de segundos: ";
    cin>>segundos;

    s = horario(horas, minutos, segundos);

    cout<<s<<endl;
}
