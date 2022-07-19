#include <iostream>

using namespace std;

class carro{
    private:
        int ano;
        float valor, km;

    public:

    //construtor
    carro(int a=0, float v=-1, float k=-1){
        ano = a;
        valor = v;
        km = k;
    }

    //get e set
    //ano
    void setano(int a){
        ano = a;
    }

    int getano(){
        return ano;
    }

    //valor
    void setvalor(float v){
        valor = v;
    }

    float getvalor(){
        return valor;
    }

    //km
    void setkm(float k){
        km = k;
    }

    float getkm(){
        return km;
    }
};

int main(){
    carro palio;

    palio.setano(1995);
    palio.setvalor(10000);
    palio.setkm(150000);
    cout << "Palio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "Valor :" << palio.getvalor() << endl;
    cout << "Quilometragem: " << palio.getkm() << endl;

    return 0;
}
