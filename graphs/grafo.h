#ifndef GRAFO_H
#define GRAFO_H


class grafo
{
private:

    grafo *proximo;

public:

    void setproximo(grafo *prox)
    {
        proximo=prox;
    }
    grafo();

};

#endif // GRAFO_H
