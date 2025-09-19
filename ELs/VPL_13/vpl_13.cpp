#include <iostream>
#include <memory> 
using namespace std;

class Teste
{
    private:
        int x;
    public:
    Teste();
    Teste(int x);
    void set_x(int x);
    ~Teste();
};

Teste :: Teste()
{
    x=0;
    cout<<"Construtor "<< x<<endl;
}

Teste :: Teste(int x)
{
    this->x=x;
    cout<<"Construtor "<< this->x<<endl;
}

void Teste :: set_x(int x)
{
    this->x=x;
}

Teste :: ~Teste()
{
    cout<<"Destrutor "<<this->x<<endl;
}

int main ()
{
    int n;
    cin>>n;
    if(n%2)
    {
        shared_ptr<Teste> ptr (new Teste(0));
        for ( int c = 1; c <= n; c++)
        {
            shared_ptr<Teste> ptr2=ptr;
            ptr->set_x(c);   
        }
        cout<<ptr.use_count()<<endl;
    }

    else
    {
        for ( int c = 1; c <= n; c++)
        {
            Teste* ptr=new Teste(c);
            unique_ptr<Teste> ptr2(new Teste(c));
        }
    }
    return 0;
}