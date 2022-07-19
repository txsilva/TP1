#include <iostream>
#include "carro.h"
using namespace std;

int main(){
    carro palio(1995, 10000, 150000);

    //palio.setano(1995);
    //palio.setvalor(10000);
    //palio.setkm(150000);
    cout << "Palio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "Valor :" << palio.getvalor() << endl;
    cout << "Quilometragem: " << palio.getkm() << endl;

    system("pause");
    return 0;
}
