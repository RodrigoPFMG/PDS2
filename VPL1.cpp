#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    ifstream in ("palavras.txt", fstream::in);
    int numero;
    int a=0;
    cin>>numero;
    string chave;
    for (int contador=0; contador<=numero;contador++)
    {
        getline(in,chave);
    }
    chave [5]='\0';
    string resposta;
    string saida;
    string letras_fora;
    bool vitoria=0;
    for (int jogada=1;jogada<=5;jogada++)
    {
        cin>>resposta;
        saida="";
        for (int i=0;i<=4;i++)
        {
            for (int j=0;j<=4;j++)
            {
                if (resposta[i]==chave[j])
                {
                    if(i==j)
                    {
                        saida+=resposta[i];
                    }
                    else 
                    {
                        saida+=(char)((int)resposta[i]+32);
                    }
                    break; 
                }
                if (j==4) 
                {
                    saida+='*';
                    for(int x=0; x<=a; x++)
                    {
                        if (resposta[i]==letras_fora[x]) break;
                        else if (x==a)
                        {
                            letras_fora+=resposta[i];
                            a++;
                            break;    
                        }
                    }
                }                
            }
        }
        cout << saida << " " << "(" << letras_fora << ")"<<endl;
        if (resposta==saida)
        {
            cout<<"GANHOU!";
            vitoria=1;
            break;
        } 
    }
    if (vitoria==0) cout<<"PERDEU!" << " " <<chave;
}