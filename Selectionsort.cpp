#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num[7]={1,3,4,6,5,2,7};
    int j,i,min,aux;


    for (i = 0;i<7; i++)
    {
       min = i;
       for (j = (i+1);j<7; j++)
       {
          if(num[j] < num[min])
          {
          min = j;
          }
       }
       if (num[i] != num[min])
       {
         aux = num[i];
         num[i] = num[min];
         num[min] = aux;
       }
    }

    for(int y=0;y<7;y++)
    {
        cout<<num[y]<<endl;
    }
}
