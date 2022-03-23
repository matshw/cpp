#include <iostream>

using namespace std;

void intercala(int* vetor, int p, int r, int q)
{
    int i,j,k,vetoraux[r-p+1];

    i = p;
    k=0;
    j = q+1;

    while(i<=q && j<=r)
    {
        if(vetor[i] < vetor[j])
        {
            vetoraux[k] = vetor[i];
            k++;
            i++;
        }
        else
        {
            vetoraux[k] = vetor[j];
            j++;
            k++;
        }
    }

    while(i<=q)
    {
        vetoraux[k] = vetor[i];
        k++;
        i++;
    }

    while(j<=r)
    {
        vetoraux[k] = vetor[j];
        j++;
        k++;
    }

    for(i=p;i<=r;i++)
    {
        vetor[i] = vetoraux[i-p];
    }
}


void mergesort(int* vetor, int p, int r)
{
    int q;

    if(p<r)
    {
        q = (p+r)/2;
        mergesort(vetor,p,q);
        mergesort(vetor,q+1,r);
        intercala(vetor,p,r,q);
    }
}

int main()
{
    int tamVetor,i;

    cout<<"Digite o tamanho do vetor:";
    cin>>tamVetor;

    int vetor[tamVetor];
    
    for(i=0;i<tamVetor;i++)
    {
        cout<<"Digite um numero para o vetor"<<i+1<<": ";
        cin>>vetor[i];
    }
    mergesort(vetor,0,tamVetor-1);
    for(i=0;i<tamVetor;i++)
    {
        cout<<vetor[i]<<" "<<endl;
    }
    cout<<endl;
}
