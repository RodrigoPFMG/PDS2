#ifndef HeapInt_H
#define HeapInt_H
#include <iostream>
using namespace std;

class HeapInt
{
    private:
        int* ptr;
    public:
    HeapInt();
    HeapInt(int n);
    HeapInt(const HeapInt& aux);
    ~HeapInt();
    void setValue(int);
    HeapInt operator= (int n);
    HeapInt operator= (const HeapInt& aux);
    HeapInt operator+ (const HeapInt& aux);
    HeapInt operator- (const HeapInt& aux);
    bool operator== (const HeapInt& aux);
    friend istream& operator>> (istream& is, HeapInt & source);
    friend ostream& operator<< (ostream& os,const HeapInt & source);
};
#endif