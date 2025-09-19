#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void funcao (int x, int &y, int *z)
{
    x++;
    y++;
    (*z)++;
    return;
}

int main ()
{
    int var1;   //1
    cin >> var1; 
    int *ponteiro= nullptr; //2
    int tamanho;
    cin >> tamanho;
    int vetor [tamanho]; //3
    for (int cont=0 ;cont<tamanho;cont++) cin >> vetor[cont];
    cout << &var1 << endl; //4
    cout << var1 << endl; //5
    cout << &ponteiro << endl; //6
    cout << ponteiro << endl; //7
    cout << &vetor << endl; //8
    cout << &vetor[0] << endl; //9
    cout << vetor[0] << endl;  //10
    ponteiro= &var1; //11
    cout << ponteiro << endl; //12
    cout << *ponteiro << endl; //13
    *ponteiro=5; //14
    cout << var1 << endl; //15
    ponteiro=vetor; //16
    cout << ponteiro << endl; //17
    cout << *ponteiro << endl; //18
    ponteiro= &vetor[0]; //19
    if (ponteiro==vetor) cout << 'S' << endl; //20
    else cout << 'N' << endl;
    cout << ponteiro << endl; //21
    cout << *ponteiro << endl; //22
    for (int i=0; i<tamanho; i++) //23
    {
        *ponteiro*=10;
        if (i==(tamanho-1))  cout << vetor[i]; //24
        else cout << vetor[i] <<" ";
        ponteiro++;
    }
    ponteiro --;
    cout << endl;
    for (int aux=0; aux<tamanho; aux++) 
    {
        if (aux==(tamanho-1)) cout << *(vetor + aux); //25
        else cout << *(vetor + aux) << " ";
    }
    cout << endl;
    for (int aux=(tamanho-1); aux>=0; aux--) 
    {
        if (aux==(0)) cout << *(ponteiro-aux); //26
        else cout << *(ponteiro-aux) << " ";
    }
    cout << endl;
    ponteiro= &vetor[tamanho-1]; //27
    cout << ponteiro << endl; //28
    cout << *ponteiro << endl; //29
    int **ppp = &ponteiro; //30
    cout << ppp << endl; //31
    cout << &ppp << endl; //32
    cout << *ppp << endl; //33
    cout <<**ppp << endl; //34;
    int x, y, z; //35
    cin >> x;
    cin >> y;
    cin >> z;
    int* pont_z= &z;
    funcao (x, y, pont_z); //36
    cout << x << " " << y << " " << z << endl; //37
    return 0; 
}