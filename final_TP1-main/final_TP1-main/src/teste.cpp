#include "teste.h"

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.

void TUNota::setUp(){
    nota = new Nota();
    estado = SUCESSO;
}

void TUNota::tearDown(){
    delete nota;
}

void TUNota::testarCenarioSucesso(){
    try{
        nota->setValor(VALOR_VALIDO);
        if (nota->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

int TUNota::run(){
    setUp();
    testarCenarioSucesso();
    //testarCenarioFalha();
    tearDown();
    return estado;
}
