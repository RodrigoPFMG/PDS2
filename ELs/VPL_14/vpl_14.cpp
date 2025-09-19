#include <iostream>
#include <vector> 
using namespace std;

class NegativeResultException : public exception
{
    private:
        int valor;
    public:
    NegativeResultException(int x);
    virtual const char* what() const throw();
    int get_Valor();   
};

NegativeResultException:: NegativeResultException (int x)
{
    this->valor=x;
}

const char*NegativeResultException::what() const throw()
{
    return "Erro: Resultado Negativo";
}

int NegativeResultException:: get_Valor()
{
    return this->valor;
}


int main ()
{
    vector<int> vet={-20,-10,0,10,20};
    try
    {
        int x;
        cin>>x;
        int val=0;
        val=vet.at(x);
        if (val<0)
        {
            throw NegativeResultException(val);
        }
        else cout<<val;
        
    }
    catch(NegativeResultException& e)
    {
            cout<<e.what()<<endl<<e.get_Valor();
    }
    catch( exception& e)
    {
         cout<< e.what();       
    }    
}