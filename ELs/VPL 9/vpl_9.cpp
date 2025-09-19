#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <iomanip> 
using namespace std;

class FiguraGeometrica;
vector<FiguraGeometrica*> figuras;
class Ponto
{
    private:
        double x;
        double y;

    public:
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();
};

void Ponto::setX(double x) { this->x=x; }

void Ponto::setY(double y) { this->y=y; }

double Ponto::getX() { return this->x; }

double Ponto::getY() { return this->y; }

class FiguraGeometrica
{
    private:
        Ponto centro;
    public:
        void setCentro(double x, double y);
        double getCentro_x();
        double getCentro_y();
        FiguraGeometrica();
        virtual void Desenha();
        virtual float CalculaArea();
        ~FiguraGeometrica();   
};

void FiguraGeometrica::setCentro(double x, double y) 
{ 
    this->centro.setX(x);
    this->centro.setY(y); 
};

double FiguraGeometrica::getCentro_x() { return this->centro.getX(); }

double FiguraGeometrica::getCentro_y() { return this->centro.getY(); }

FiguraGeometrica::FiguraGeometrica() { figuras.push_back(this); }

void FiguraGeometrica::Desenha()
{ 
    cout<<this->centro.getX()<<" "<<this->centro.getY()<<"NOME";
};

float FiguraGeometrica::CalculaArea()
{
    float area_total=0;
    for(FiguraGeometrica* f:figuras) area_total+=f->CalculaArea();
    return area_total;
};

FiguraGeometrica::~FiguraGeometrica()
{
    for(FiguraGeometrica* f:figuras) figuras.erase(figuras.begin());
};

class Retangulo : public FiguraGeometrica
{
    private:
        int base_r;
        int altura_r;
    public:
        Retangulo(int &index);
        void setBase_r(int x);
        void setAltura_r(int y);
        int getBase_r();
        int getAltura_r();
        void Desenha()override;
        float CalculaArea()override; 
};

Retangulo::Retangulo(int & index )
{
    figuras[index]=this;
    index++;
};
void Retangulo::setBase_r(int x) { this->base_r=x; }

void Retangulo::setAltura_r(int y) { this->altura_r=y; }

int Retangulo::getBase_r() { return this->base_r; }

int Retangulo::getAltura_r() { return this->altura_r; }

void Retangulo::Desenha()
{
    cout<<fixed<<setprecision(0)<<this->getCentro_x()<<" "<<this->getCentro_y()<< " ";
    cout<<"RETANGULO"<<endl;   
};

float Retangulo::CalculaArea()
{
    float area_r=0;
    area_r=this->getBase_r()*this->getAltura_r();
    return (area_r);
};

class Circulo : public FiguraGeometrica
{
    private:
        int raio;
    public:
        Circulo(int & index);
        void setRaio(int x);
        int getRaio();
        void Desenha()override;
        float CalculaArea()override;
};

Circulo::Circulo(int & index )
{
    figuras[index]=this;
    index++;
};

void Circulo::setRaio(int x) { this->raio=x; }

int Circulo::getRaio() { return this->raio; }

void Circulo::Desenha()
{
    cout<<fixed<<setprecision(0)<<this->getCentro_x()<<" "<<this->getCentro_y()<< " ";
    cout<<"CIRCULO"<<endl;   
};

float Circulo::CalculaArea()
{
    float area_c=0;
    area_c=M_PI*this->getRaio()*this->getRaio();
    return(area_c);
};

class Triangulo : public FiguraGeometrica
{
    private:
        int base_t;
        int altura_t;
    public:
        Triangulo(int & index);
        void setBase_t(int x);
        void setAltura_t(int y);
        int getBase_t();
        int getAltura_t();
        void Desenha()override;
        float CalculaArea()override;
};

Triangulo::Triangulo(int & index )
{
    figuras[index]=this;
    index++;
};

void Triangulo::setBase_t(int x) { this->base_t=x; }

void Triangulo::setAltura_t(int y) { this->altura_t=y; }

int Triangulo::getBase_t() { return this->base_t; }

int Triangulo::getAltura_t() { return this->altura_t; }

void Triangulo::Desenha()
{
    cout<<fixed<<setprecision(0)<<this->getCentro_x()<<" "<<this->getCentro_y()<< " ";
    cout<<"TRIANGULO"<<endl;   
};
float Triangulo::CalculaArea()
{
    float area_c;
    area_c=(this->getBase_t()*this->getAltura_t())/2;
    return(area_c);
};

int main ()
{
    int index=0;
    int arg_1=0, arg_2=0, arg_3=0, arg_4=0;
    bool final=1;
    char leitura='\0';
    while (final)
    {
        leitura=getchar();
        switch (leitura)
        {
            case 'R':
            {
                cin>>arg_1;
                cin>>arg_2;
                cin>>arg_3;
                cin>>arg_4; 
                Retangulo* fig=new Retangulo(index);
                fig->setCentro(arg_1,arg_2);
                fig->setBase_r(arg_3);
                fig->setAltura_r(arg_4);
                break;
            }

            case 'C':
            {
                cin>>arg_1;
                cin>>arg_2;
                cin>>arg_3;
                Circulo* fig1=new Circulo(index);
                fig1->setCentro(arg_1,arg_2);
                fig1->setRaio(arg_3);
                break;
            }

            case 'T':
            {
                cin>>arg_1;
                cin>>arg_2;
                cin>>arg_3;
                cin>>arg_4;
                Triangulo* fig2=new Triangulo(index);
                fig2->setCentro(arg_1,arg_2);
                fig2->setBase_t(arg_3);
                fig2->setAltura_t(arg_4);
                break;
            }

            case 'D':
            {
                for(FiguraGeometrica* f:figuras) f->Desenha();
                break;
            }

            case 'A':
            {
                float area=0;
                for(FiguraGeometrica* f:figuras) area+=f->CalculaArea();
                cout << fixed << setprecision(2)<<area << endl;
                break;
            }

            case 'E':
            {
                final=0;
                delete figuras[0];
                break;
            }
        }
    }   
    return 0;
}