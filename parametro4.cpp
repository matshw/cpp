#include <iostream>

using namespace std;

int intermediario(int n1, int n2, int n3)
{
    if(n1 > n2 && n1 < n3)
    {
        return n1;
    }
    if(n1 > n3 && n1 < n2)
    {
        return n1;
    }
    if(n2 > n1 && n2 < n3)
    {
        return n2;
    }
    if(n2 > n3 && n2 < n1)
    {
        return n2;
    }
    if(n3 > n1 && n3 < n2)
    {
        return n3;
    }
    if(n3 > n2 && n3 < n1)
    {
        return n3;
    }
    else
        cout<<"Informe um valor válido!";
}
int main()
{
    int n1, n2, n3, inter;

    cout<<"Digite o primeiro numero: ";
    cin>>n1;
    cout<<"Digite o segundo numero: ";
    cin>>n2;
    cout<<"Digite o terceiro numero: ";
    cin>>n3;

    inter = intermediario(n1,n2,n3);

    cout<<inter<<endl;
}
