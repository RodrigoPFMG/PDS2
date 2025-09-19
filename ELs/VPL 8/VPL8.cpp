#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Objeto;
vector<Objeto*> lista;
class Objeto
{
private:
    int id;
    int n;
public:
    Objeto();
    Objeto(int &index);
    Objeto(int x,Objeto*);
    ~Objeto();
    int Retorna_ID(Objeto* obj);
    int Num_Obj();
    Objeto* Retorna_End();
};

Objeto::Objeto(){}
Objeto::Objeto(int &index)
{
    this->id=index;
    lista.push_back(this);
    index ++;
    this->n=0;
    for(Objeto* o:lista) o->n=Num_Obj();
    cout<<this->id<<" "<<this<<endl;
}
Objeto::Objeto(int x, Objeto* obj1)
{
    this->id=x;
    this->n=0;
    lista.insert(lista.begin(),this);
    for(Objeto* o:lista) o->n=Num_Obj();
    cout<<this->id<<" "<<this<<endl;
}

Objeto::~Objeto()
{
    cout<<this->id<<" "<<this<<endl;
    lista.erase(lista.begin());
    for(Objeto* o:lista) o->n=Num_Obj();
}

int Objeto::Retorna_ID(Objeto* obj)
{
    return (this->id);
}

int Objeto::Num_Obj()
{
    return(lista.size());
}

Objeto* Objeto::Retorna_End()
{
    return (this);
}

int main ()
{
    int index=1;
    char leitura='\0';
    bool final=1;
    int x=0;
    while (final)
    {
        leitura=getchar();
        switch (leitura)
        {
            case 'A':
            {
                Objeto* obj= new Objeto(index);
                break;
            }
            case 'C':
            {
                cin>>x;
                if (x>=0)
                {
                    cout<<"ERRO"<<endl;
                }
                else Objeto* obj1= new Objeto(x,obj1);
                break;
            }
            case 'R':
            {
               x=(lista[0]->Num_Obj());
               if (x==0) cout<<"ERRO"<<endl;
               else 
               {
                Objeto* obj2= new Objeto();
                obj2=lista[0]->Retorna_End();
                delete obj2; 
               }
                break;
            }
            case 'N':
            {
                cout<<lista[0]->Num_Obj()<<endl;
                break;
            }
            case 'P':
            {
                cin>>x;
                x--;
                if(x>(lista[0]->Num_Obj()-1)||x<0) cout<<"ERRO"<<endl;
                else cout<<lista[x]->Retorna_ID(lista[x])<<" "<<lista[x]<<endl;
                break;
            }
            case 'L':
            {
                for(Objeto* o:lista)
                {
                    cout<<o->Retorna_ID(o)<<" "<<o<<endl;
                }
                break;
            }
            case 'E':
            {
                final=0;
                break;
            }
        }
    }
 return 0;
}