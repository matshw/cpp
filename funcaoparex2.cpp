#include <iostream>

using namespace std;

float aritmetica(int n1, int n2, float &media)
{
    media = (n1+n2)/2;
}

int main()
{
    int n1, n2;
    float m;

    cout<<"Digite o primeiro numero: ";
    cin>>n1;

    cout<<"Digite o segundo numero: ";
    cin>>n2;

    aritmetica(n1,n2, m);

    cout<<m<<endl;
}
