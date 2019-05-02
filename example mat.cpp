#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int quantvert,quantiligas;

    int matverts[quantiligas][quantvert];

    for(int i=0;i<quantiligas;i++)
    {
        for(int y=0;y<quantvert;y++)
        {
            cin>>matverts[i][y];
        }
    }
    for(int x=0;x<quantiligas;x++)
    {
        for(int k=0;k<quantvert;k++)
        {
            cout<<matverts[x][k];
        }
    }
}
