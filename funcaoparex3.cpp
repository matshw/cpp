#include <iostream>

using namespace std;

float kilometros(float km)
{
    float milhas;

    milhas = (km*0.62);

    return milhas;
}

int main()
{
    int km;
    float k;

    cout<<"Digite o numero de kilometros que deseja converter: ";
    cin>>km;

    k = kilometros(km);

    cout<<k<<endl;
}
