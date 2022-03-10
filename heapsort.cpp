#include <iostream>

using namespace std;

void heapify(int* vetor, int i, int tamVetor)
{
	int esquerda = 2*i;
	int direita = 2*i+1;
	int maior;
	if(esquerda <= tamVetor && vetor[esquerda] >= vetor[i])
    {
		maior = esquerda;
	}
	else
    {
		maior = i;
	}
	if(direita <= tamVetor && vetor[direita] >= vetor[maior])
    {
		maior = direita;
	}
	if(maior != i)
    {
		int aux = vetor[i];
		vetor[i] = vetor[maior];
		vetor[maior] = aux;
		heapify(vetor,maior,tamVetor);
	}
}

void Heap(int* vetor, int tamVetor)
{
    int i;

	for(i<(tamVetor/2);i>=0;i--)
    {
        heapify(vetor,1,tamVetor);
	}
}

void Heapsort(int* vetor, int tamVetor)
{
    Heap(vetor,tamVetor);
	for(int i=tamVetor;i>=0;i--)
    {
		int aux = vetor[0];
		vetor[0] = vetor[i];
		vetor[i] = aux;
		tamVetor--;
		heapify(vetor,0,tamVetor);
	}
}
int main()
{
    int tamVetor;
	int vetor[10];

	cout<<"Digite o tamanho do vetor:";
	cin>>tamVetor;

	for(int i=0;i<tamVetor;i++)
	{
	    cout<<"Digite um numero para o vetor:";
	    cin>>vetor[i];
	}

	Heapsort(vetor,tamVetor);
	for(int i=0;i<tamVetor;i++)
    {
		cout<<vetor[i]<<endl;
    }

    cout<<endl;

}
