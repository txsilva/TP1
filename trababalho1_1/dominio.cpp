#include <iostream>
#include<list>
#include<string>
#include <stdexcept>
#include "dominio.h"

using namespace std;

void Nome::validar(string nome0){
    int tamanho = nome0.length();
    try{
        if(tamanho > LIMITE)
            throw(nome0);
    }
    catch(string errornome){
        cout << "Access denied - nome nao esta dentro do limite.\n";
        cout << "Nome informada: " << errornome << endl;
        throw std::invalid_argument("tipo de argumento invalido em Nome ");
    }
}
void Nome::setNome(string nome1){
    validar(nome1);
    nome = nome1;
}

    void Nota::validar(int num){
    try{
        if(num < LIMITEMENOR || num > LIMITEMAIOR)
            throw (num);
    }
    catch(int errornum){
        cout << "Access denied - nota nao esta na intervalo 0 a 10.\n";
        cout << "Nota informada: " << errornum << endl;
        throw std::invalid_argument("tipo de argumento invalido em Nota ");
    }
}
    void Nota::setValor(int nota1){
        validar(nota1);
        nota = nota1;
    }

    //cidade
    void Cidade::validar(string nome){
        string valcidade = nome;
        int numCidade = 0;

        std::list<string> mycidades = {"Antalya", "Bangkok", "Delhi","Dubai", "Hong Hong", "Londres", "Macau", "Mumbai", "Paris",
    "Rio de Janeiro", "Sao Paulo", "Seul", "Istambul","Kuala Lampur", "Nova Iorque","Osaka",
     "Phuket", "Shenzhen", "Toquio"};

    for(string x : mycidades){
            if(valcidade == x){
                numCidade = ++numCidade;
                break;
            }
        }

        try{
            if(numCidade <= 0){
                //cout << "Cidade >>> " << valcidade << endl;;
                throw(valcidade);
            }
        }catch(string nomecidade){
            cout << "Access denied - cidade nao esta na lista.\n";
            cout << "Cidade informada: " << nomecidade << endl;
            throw std::invalid_argument(valcidade);
        }
    }
    void Cidade::setnomeCidade(string nome){
        validar(nome);
        nomeCidade = nome;
    }
    string Cidade::getnomeCidade(){
        return nomeCidade;
    }


    //pais
    void Pais::validar(string nome){
        string valpais = nome;
        int numPais = 0;

        std::list<string> mypais = {"Estados Unidos", "Brasil", "China","Coreia do Sul", "Emirados", "Franca", "India", "Japao", "Malasia",
    "Reino Unido", "Tailandia", "Turquia"};

    for(string x : mypais){
            if(valpais == x){
                numPais = ++numPais;
                break;
            }
        }

        try{
            if(numPais <= 0){
                //cout << "Cidade >>> " << valcidade << endl;;
                throw(valpais);
            }
        }catch(string nomepais){
            cout << "Access denied - pais nao esta na lista.\n";
            cout << "Pais informado: " << nomepais << endl;
            throw std::invalid_argument(valpais);
        }
    }
    void Pais::setnomePais(string nome){
        validar(nome);
        nomePais = nome;
    }
    string Pais::getnomePais(){
        return nomePais;
    }


        //idioma
    void Idioma::validar(string nome){
        string validioma = nome;
        int numIdioma = 0;

        std::list<string> myidioma = {"Ingles","Chines","Mandarim","Hindi","Espanhol",
    "Frances","Arabe","Bengali","Russo","Portugues","Indonesio"};

    for(string x : myidioma){
            if(validioma == x){
                numIdioma = ++numIdioma;
                break;
            }
        }

        try{
            if(numIdioma <= 0){
                //cout << "Cidade >>> " << valcidade << endl;;
                throw(validioma);
            }
        }catch(string nomeidioma){
            cout << "Access denied - idioma nao esta na lista.\n";
            cout << "Idioma informada: " << nomeidioma << endl;
            throw std::invalid_argument(validioma);
        }
    }
    void Idioma::setnomeIdioma(string nome){
        validar(nome);
        nomeIdioma = nome;
    }
    string Idioma::getnomeIdioma(){
        return nomeIdioma;
    }


    //data
    void data::setdia(string datadia){
        dia = datadia;
    }
     string data::getdia(){
        return dia;
    }
    //data
    void data::setmes(string datames){
        mes = datames;
    }
    string data::getmes(){
        return mes;
    }
