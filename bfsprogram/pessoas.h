#ifndef PESSOAS_H
#define PESSOAS_H
#include <iostream>

using namespace std;
class pessoas
{
private:
    string pessoa;
    int nump;

public:
    void setnome(string nome)
    {
        pessoa=nome;
    }
    string getnome()
    {
        return pessoa;
    }
    void setnump(int x){nump=x;}
    int getnum(){return nump;}

    pessoas();
};

#endif // PESSOAS_H
