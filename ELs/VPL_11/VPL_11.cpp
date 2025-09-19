#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
template<typename T>
class Vetor
{
    private:
        T* elementos;
        int num_elementos;
        int max_elementos;
    public:

    Vetor(int n)
    {
        this->max_elementos=n;
        this->num_elementos=0;
        elementos = new T[max_elementos];
    }

    Vetor(Vetor &source)
    {
        this->elementos=new T[source.max_elementos];
        this->num_elementos=source.num_elementos;
        this->max_elementos=source.max_elementos;
        for ( int i = 0; i <= num_elementos; i++)
        {
            elementos[i]=source.elementos[i];
        }
    }

    ~Vetor()
    { 
        delete [] elementos;
    }

    void SetElemento(int i, T x)
    {
        this->elementos[i]=x;
    }

    T GetElemento(int i)
    {
        return this->elementos[i];
    } 

    void AdicionaElemento(T x)
    {
        this->elementos[num_elementos]=x;
        this->num_elementos++;
    }

    void Imprime()
    {
        for (int i = 0; i < (this->num_elementos); i++)
        {
            cout<<elementos[i]<<" ";
        }  
        cout<<endl; 
    }
};