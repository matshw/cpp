#include <iostream>

using namespace std;

float calc(int n)
{
    float S;
    int i;

    S = 0;

    for(i=1;i<=n;i++)
    {
        S = S + (n/i);
        n--;
    }

    return calc;
}
int main()
{
    int num;
    float cal;

    cout<<"Digite o valor do numero: ";
    cin>>num;

    cal = calc(num);

    cout<<cal<<endl;
}
