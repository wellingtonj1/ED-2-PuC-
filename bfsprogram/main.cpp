#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include "pessoas.h"

using namespace std;

void getprint(vector<pessoas> pes, int quant,vector<int>a,vector<int>d)
{
    int y;
    cout<<"   ";
    for(y=0;y<quant;y++)
    {
        cout<<pes[y].getnome()<<"   ";
    }
    puts("");
    for(y=0;y<quant;y++)
    {
        cout<<pes[y].getnome()<<endl;
    }
}
int main()
{
    string nome;
    int i,quantiligas,x,y;
    vector<pessoas> pessoas;
    vector<int> linhas,colunas;

    int quantpes;
    puts("Insira quantidade de pessoas");
    cin>>quantpes;
    cin.ignore();
    pessoas.resize(quantpes);
    linhas.resize(quantpes);
    colunas.resize(quantpes);
    for(i=0;i<quantpes;i++)
    {
        getline(cin,nome);
        pessoas[i].setnome(nome);
        pessoas[i].setnump(i);
        cout<<"Num da pessoa ="<<pessoas[i].getnum()<<endl;
    }
    puts("Quantidade de ligações?");
    cin>>quantiligas;

    puts("Fale as ligações ..");
    int mat[quantpes][quantpes];
    for(x=0;x<quantpes;x++)
    {
        for(y=0;y<quantpes;y++)
        {
            cin>>mat[x][y];
        }
    }
    getprint(pessoas,quantpes,linhas,colunas);
    for(x=0;x<quantpes;x++)
    {
        for(y=0;y<quantpes;y++)
        {
            cout<<mat[x][y]<<" ";
        }
        puts("");
    }

}

