#include <iostream>
#include <iomanip>

using namespace std;

void heapsort(int a[], int n)
{
   int i = n / 2, pai, filho, t;
   while(true)
   {
      if (i > 0)
      {
          i--;
          t = a[i];
      } else
      {
          n--;
          if (n == 0) return;
          t = a[n];
          a[n] = a[0];
      }
      pai = i;
      filho = i * 2 + 1;
      while (filho < n)
      {
          if ((filho + 1 < n)  &&  (a[filho + 1] > a[filho]))
              filho++;
          if (a[filho] > t)
          {
             a[pai] = a[filho];
             pai = filho;
             filho = pai * 2 + 1;
          } else
          {
             break;
          }
      }
      a[pai] = t;
   }

}

int main()
{
    int tama=7;
    int num[tama]={3,1,4,6,5,2,7};

    heapsort(num,tama);

    for(int y=0;y<tama;y++)
    {
        cout<<num[y]<<endl;
    }
}
