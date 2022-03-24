#include <iostream>

using namespace std;

 void potencia(int n)
 {
     int potencia;

     potencia = (n*n);
     cout<<potencia<<endl;
 }
int main()
{
    int a;

    cout<<"Digite a: ";
    cin>>a;

    potencia(a);
}
