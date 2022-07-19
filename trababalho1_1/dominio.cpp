#include <iostream>
#include<string>
#include "dominio.h"

using namespace std;

    void Nota::validar(int notinha){
        if(notinha ==0||notinha ==1||notinha ==2||notinha ==3||notinha ==4||notinha ==5){
    }else{
        throw invalid_argument("argumento invalido");
        }
    }
    void Nota::setnota(int nota1){
        validar(nota1);
        nota = nota1;
    }
    int Nota::getnota(){
        return nota;
    }

    //cidade
    void Cidade::setnomeCidade(string nome){
        nomeCidade = nome;
    }
    string Cidade::getnomeCidade(){
        return nomeCidade;
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
