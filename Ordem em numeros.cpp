#include <bits/stdc++.h>


using namespace std;

int main()
{
    int vetor[5],aux;
    srand(time(NULL));

    for(int p=0;p<5;p++)
    {
        vetor[p]= rand() % 1000 + 100;;
    }

    puts("antes");
    for(int u=0;u<5;u++)
    {
        cout<<vetor[u]<<endl;
    }

    for(int w=0;w<5;w++)
    {
        for(int i=5;i>=0;i--)
        {
            if(vetor[i]<vetor[i-1]&&i!=0)
            {
                aux=vetor[i-1];
                vetor[i-1]=vetor[i];
                vetor[i]=aux;
                aux=0;
            }
            else
            {

            }

        }
    }

    puts("despos");

    for(int u=0;u<5;u++)
    {
        cout<<vetor[u]<<endl;
    }

}
