#include <iostream>
#include <iomanip>

using namespace std;

void quicksort(int values[], int began, int end)
{
    int i, j, pivo, aux;
    i = began;
    j = end-1;
    pivo = values[(began + end) / 2];
    while(i <= j)
    {
        while(values[i] < pivo && i < end)
        {
            i++;
        }
        while(values[j] > pivo && j > began)
        {
            j--;
        }
        if(i <= j)
        {
            aux = values[i];
            values[i] = values[j];
            values[j] = aux;
            i++;
            j--;
        }
    }
    if(j > began)
        quicksort(values, began, j+1);
    if(i < end)
        quicksort(values, i, end);
}

int main()
{
    int tama=7;
    int i,num[tama]={3,1,4,6,5,2,7};
    bool trocado;
    int aux;

    quicksort(num,0,tama);
    for(int y=0;y<tama;y++)
    {
        cout<<num[y]<<endl;
    }
}
