#include "HeapInt.hpp"

    HeapInt::HeapInt()
    {
        ptr= new int;
        *ptr=0;
    };
    HeapInt::HeapInt(int n)
    {
        ptr= new int;
        *ptr=n;
    };
    HeapInt::HeapInt(const HeapInt& aux)
    {
        ptr= new int;
        *ptr= *aux.ptr;
    };
    HeapInt::~HeapInt()
    {
        delete ptr;
    };

    void HeapInt::setValue(int x)
    {
       HeapInt::operator=(x); 
    }

   HeapInt HeapInt::operator= (int n)
   {
        *this->ptr=n;
        return *ptr;
   };

   HeapInt HeapInt::operator= (const HeapInt& source)
   {
        *this->ptr=*source.ptr;
        return *this;
   };

   HeapInt HeapInt::operator+ (const HeapInt& source)
   {
        HeapInt aux;
        *aux.ptr=*this->ptr+*source.ptr;
        return aux;
   }

   HeapInt HeapInt::operator- (const HeapInt& source)
   {
        HeapInt aux;
        *aux.ptr=*this->ptr-*source.ptr;
        return aux;
   }

   bool HeapInt::operator== (const HeapInt& source)
   {
        if (*this->ptr==*source.ptr)
        {
            return 1;
        }
        else return 0; 
   }

   istream& operator>> (istream& is, HeapInt& source)
   {
        return is >>*source.ptr;
   }

   ostream& operator<<(ostream& os,const HeapInt& source)
   {
        return os <<*source.ptr;
   }