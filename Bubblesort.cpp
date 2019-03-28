#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int tama=7;
    int i,num[tama]={3,1,4,6,5,2,7};
    bool trocado;
    int aux;

    do
    {
       trocado=false;
       for(i=0; i<tama-2;i++)
       {
          // verificar se os elementos estão na ordem certa
          if(num[i]>num[i+1])
          {
            // trocar elementos de lugar
            aux=num[i];
            num[i]=num[i+1];
            num[i+1]=aux;
            trocado=true;
          }
       }
      // enquanto houver elementos sendo reordenados.
    }while(trocado);

    for(int y=0;y<tama;y++)
    {
        cout<<num[y]<<endl;
    }
}
