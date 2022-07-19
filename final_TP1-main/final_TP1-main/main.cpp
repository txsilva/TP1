#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "teste.h"
using namespace std;

int main()
{

    Pais nomepais;
    nomepais.setValor("Brasil");

    Cidade cidade;
    cidade.setValor("Paris");

    Idioma idioma;
    idioma.setLingua("Portugues");

    Nota nota;
    nota.setValor(10);

    Descricao descri;
    descri.setDes("asdf");

    Nome nome;
    nome.setNome("Mateus Pereira");

    Senha senha;
    senha.setNome_senha("r!2");

    Data data;
    data.setData_nome("03/Fev");

    Codigo codigo;
    codigo.setValor("7992739871145");

// Instanciar classe de teste de domínio.

    TUNota testeA;

    // Invocar método e apresentar mensagem acerca do resultado do teste.

    switch(testeA.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA   - NOME" << endl;
                                break;
    }

    return 0;





}
