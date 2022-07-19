#include <iostream>
#include<string>
#include <list>
#include "dominio.hpp"

using namespace std;

int main(){
    Nota ponto;
    //data diainp;
    //cidade cidadeinp;

    ponto.setnota(30);

    //diainp.setdia("20");
    //diainp.setmes("10");

    //cidadeinp.setnomeCidade("Brasilia");

   cout << "Nota registrada: " << ponto.getnota() << endl;
   //cout << "Dia registrado: " << diainp.getdia() << endl;
   //cout << "Mes registrado: " << diainp.getmes() << endl;
   //cout << "Cidade registrada: " << cidadeinp.getnomeCidade() << endl;

    printf("\n\nACABOU\n\n");

    system("pause");
    return 0;
}
