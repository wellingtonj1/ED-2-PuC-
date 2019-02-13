#include <bits/stdc++.h>
#define tamanho 8

using namespace std;

void ordem(string *vet)
{
    string aux="";
    for(int w=0;w<tamanho;w++)
    {
        for(int i=w+1;i<tamanho;i++)
        {
            if(vet[w]>vet[i])
            {
                aux=vet[w];
                vet[w]=vet[i];
                vet[i]=aux;
            }
        }
    }
}
int main()
{
    string vetor[tamanho]={"a","c","d","b","f","x","y","A"};
    srand(time(NULL));

    /*for(int p=0;p<tamanho;p++)
    {
        vetor[p]= rand() % tamanho + 1;
    }*/
    puts("antes");
    for(int u=0;u<tamanho;u++)
    {
        cout<<vetor[u]<<endl;
    }

    puts("despos");
    ordem(vetor);
    for(int u=0;u<tamanho;u++)
    {
        cout<<vetor[u]<<endl;
    }

}
