#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vetor[5],aux;

    vetor[0]=500;
    vetor[1]=400;
    vetor[2]=300;
    vetor[3]=200;
    vetor[4]=100;

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
