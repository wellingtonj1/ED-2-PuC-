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
    int i,quantiligas,j,k;
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
    }
    puts("Quantidade de ligações?");
    cin>>quantiligas;

    puts("Fale as ligações ..");
    vector<int>x,y;
    x.resize(quantiligas);
    y.resize(quantiligas);
    for(i=0;i<quantiligas;i++)
    {
        cin>>j>>k;
        x.push_back(j);
        y.push_back(k);
    }
    getprint(pessoas,quantpes,x,y);
    for(i=0;i<quantpes;i++)
    {
        for(int w=0;w<quantpes;w++)
        {
            if(i==x[w]&&y[i]==w)
            {
                cout<<1<<endl;
            }
        }
    }


}
