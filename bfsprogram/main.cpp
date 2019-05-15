#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include "pessoas.h"

using namespace std;

int main()
{
    string nome;
    int i;
    vector<pessoas> pessoas;
    vector<int> vertices;

    int quantpes;
    cin>>quantpes;
    cin.ignore();
    pessoas.resize(quantpes);

    for(i=0;i<quantpes;i++)
    {
        getline(cin,nome);
        pessoas[i].setnome(nome);
    }

    for(i=0;i<quantpes;i++)
    {
        cout<<pessoas[i].getnome()<<endl;
    }


}
