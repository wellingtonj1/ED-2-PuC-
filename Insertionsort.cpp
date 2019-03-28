#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num[7]={1,3,4,6,5,2,7};
    int eleito,j;

    for (int i =1;i<7;i++)
    {
            eleito=num[i];
            j=i-1;
            while (j>=0&&num[j]>eleito)
            {
                num[j+1]=num[j];
                j--;
            }
            num[j+1]=eleito;
    }

    for(int y=0;y<7;y++)
    {
        cout<<num[y]<<endl;
    }
}
