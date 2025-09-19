#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;
map<string,int> m;

void func (string &palavra,int &repetidor){
for (auto it = m.begin(); it!= m.end(); it++)
        {
            if(it->first==palavra){
                it->second++;
                repetidor=1;
                break;
            }
        }
        if (repetidor==0) m[palavra]=1;
        repetidor=0;
        palavra="";
}

int main ()
{
    string nome="";
    string leitura="";
    string palavra="";
    string palavra_acoplada="";
    int repetidor=0;
    cin>>nome;
    ifstream in (nome, fstream::in);
    if (!in.is_open()) return 1;
    unsigned int i;
    while (getline(in,leitura,' '))
    { 
        for (i = 0; i < leitura.length(); i++){
            if((leitura.at(i)>='A' && leitura.at(i)<='Z')||(leitura.at(i)>='a' && leitura.at(i)<='z')||(leitura.at(i)>='0' && leitura.at(i)<='9')){
                if (leitura.at(i)>='A' && leitura.at(i)<='Z') leitura.at(i)=tolower(leitura.at(i));
                palavra+=leitura.at(i);
            }
            else{
                for (unsigned int i2 = i; i2 <(leitura.length()) ; i2++){
                    if((leitura.at(i2)>='A' && leitura.at(i2)<='Z')||(leitura.at(i2)>='a' && leitura.at(i2)<='z')||(leitura.at(i2)>='0' && leitura.at(i2)<='9')){
                        if (leitura.at(i2)>='A' && leitura.at(i2)<='Z') leitura.at(i2)=tolower(leitura.at(i2));
                    palavra_acoplada+=leitura.at(i2);    
                }
                }
                break;
            }        
    }
    func(palavra,repetidor);
        if (palavra_acoplada!=""){
            func(palavra_acoplada,repetidor);
        }
    }    
    for (auto it = m.begin(); it!= m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}