#include <iostream>

using namespace std;

int PARTICIONA(int* vetor,int p,int r)
{
    int q = vetor[r];
    int i = (p-1);
    for(int j=p;j<=r-1;j++)
    {
        if(vetor[j] <= q)
        {
            i++;
            int aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }
    int aux2 = vetor[i+1];
    vetor[i+1] = vetor[r];
    vetor[r] = aux2;

    return(i+1);
}

void quicksort(int* vetor,int p,int r)
{
    if(p<r)
    {
        int q = PARTICIONA(vetor,p,r);
        quicksort(vetor,p,q-1);
        quicksort(vetor,q+1,r);
    }
}


int main()
{
    int tamVetor;

    cout<<"Digite o tamanho do vetor: ";
    cin>>tamVetor;

    int vetor[tamVetor];

    for(int i=0;i<tamVetor;i++)
    {
        cout<<"Digite um numero para o vetor: ";
        cin>>vetor[i];
    }

    int p = vetor[0];
    int r = vetor[tamVetor];

    quicksort(vetor,0,tamVetor-1);

    for(int i=0;i<tamVetor;i++)
    {
		cout<<vetor[i]<<" "<<endl;
    }

    cout<<endl;
}
