#include "controladorasapresentacao.h"

//--------------------------------------------------------------------------------------------
// Implementações de métodos de classes controladoras.

bool CntrApresentacaoAutenticacao::autenticar(EMAIL *email){

    // Mensagens a serem apresentadas na tela de autenticação.

    char texto1[]="Digite o Email  : ";
    char texto2[]="Digite a senha: ";
    char texto3[]="Dado em formato incorreto. Digite algo.";

    // Campos de entrada.

    char campo1[80];
    char campo2[80];

    Senha senha;                                                                                // Instancia a classe Senha.

    while(true){

        // Apresenta tela de autenticação.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << " ";                                                                  // Imprime nome do campo.
        cin >> campo1;                                                                          // Lê valor do campo.
        cout << texto2 << " ";                                                                  // Imprime nome do campo.
        cin >> campo2;                                                                          // Lê valor do campo.

        try{
            cpf->setValor(string(campo1));                                                      // Atribui valor ao CPF.
            senha.setValor(string(campo2));                                                     // Atribui Valor à senha.
            break;                                                                              // Abandona laço em caso de formatos corretos.
        }
        catch(invalid_argument &exp){                                                           // Captura exceção devido a formato incorreto.
            CLR_SCR;                                                                            // Limpa janela.
            cout << texto3 << endl;                                                             // Informa formato incorreto.
            getch();                                                                            // Lê caracter digitado.
        }
    }
    return (cntr->autenticar(*cpf, senha));                                                     // Solicita serviço de autenticação.
}

//--------------------------------------------------------------------------------------------
