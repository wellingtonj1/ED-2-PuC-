#ifndef PESSOAS_H
#define PESSOAS_H
#include <iostream>

using namespace std;
class pessoas
{
private:
    string pessoa;

public:
    void setnome(string nome)
    {
        pessoa=nome;
    }
    string getnome()
    {
        return pessoa;
    }
    pessoas();
};

#endif // PESSOAS_H
