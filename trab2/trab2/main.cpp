#include <string.h>
#include <stdexcept>
#include <iostream>

#include "dominios.h"
#include "interfaces.h"
#include "controladorasapresentacao.h"
//#include "stubs.h"

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    // Declarar poteiros e instanciar controladoras.
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;

    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();

    // Instanciar stubs.
    IServicoAutenticacao *stubServicoAutenticacao;
    //stubServicoAutenticacao = new StubServicoAutenticacao();

    // Interligar controladoras e stubs.
    //cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(stubServicoAutenticacao);
    return 0;
}
