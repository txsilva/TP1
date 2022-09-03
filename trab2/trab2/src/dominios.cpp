 #include "dominios.h"
 #include <string>
 #include <list>
 #include <iostream>
 #include <cstring>

 ///matricula: 190035145

 using namespace std;

///Fun��o CheckLuhn � para fazer a verifica��o do algoritmo Luhn,  tamb�m conhecido como algoritmo de "Modulo 10" que � muito utilizado para fazer verifica��es de c�digos de cart�es de cr�dito
///Ele faz a soma dos v�rios n�meros dentro dos c�digos para ver se eles est�o corretos na soma total.
bool checkLuhn(const string& cardNo)
{
    int nDigits = cardNo.length();

    int nSum = 0, isSecond = false;
    for (int i = nDigits - 1; i >= 0; i--) {

        int d = cardNo[i] - '0';

        if (isSecond == true)
            d = d * 2;

        /// We add two digits to handle
        /// cases that make two digits after
        /// doubling
        nSum += d / 10;
        nSum += d % 10;

        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}

///Fun��o Pais::validar recebe a string nomedoPais e define para cada um dos paises listados na lista abaixo um valor, definindo cada um desses paises um n�mero e validando esse n�mero como o valor daquele pais.
void Pais::validar(string nomedoPais){
    int numpais = 0;
    std::list<string> mypaises = {"Estados Unidos", "Brasil", "China","Coreia do Sul", "Emirados", "Franca", "India", "Japao", "Malasia",
    "Reino Unido", "Tailandia", "Turquia"};
    for(string x : mypaises){
        if(nomedoPais == x){
            numpais = ++numpais;
            break;
        }
    }
   if(numpais <= 0)
        throw std::invalid_argument("Argumento invalido");
}
///Armazena o valor do nome do Pais e utiliza o this-> para referenciar o nome como nomePais.
void Pais::setValor(string nome){
    validar(nome);
    this->nomePais = nome;
}

///Fun��o Cidade::validar recebe a string nome e define para cada uma das cidades listadas na lista abaixo um valor, definindo cada uma dessas cidades um n�mero e validando esse n�mero como o valor daquela cidade.
void Cidade::validar(string nome){

    int numCidade = 0;

    std::list<string> mypaises = {"Antalya", "Bangkok", "Delhi","Dubai", "Hong Hong", "Londres", "Macau", "Mumbai", "Paris",
    "Rio de Janeiro", "Sao Paulo", "Seul", "Istambul","Kuala Lampur", "Nova Iorque","Osaka",
     "Phuket", "Shenzhen", "Toquio"};
    for(string x : mypaises){
        if(nome == x){
            numCidade = ++numCidade;
            break;
        }
    }
   if(numCidade <= 0)
        throw std::invalid_argument("Argumento invalido");
}
///Armazena o valor do nome da Cidade e utiliza o this-> para referenciar o nome como nomeCidade.
void Cidade::setValor(string nome){
    validar(nome);
    this->nomeCidade = nome;
}

///Fun��o Idioma::validar recebe a string lingue e define para cada um dos idiomas listadas na lista abaixo um valor, definindo cada um desses idiomas um n�mero e validando esse n�mero como o valor daquele idioma.
void Idioma::validar( string lingue){
    int numerocidade = 0;
    std::list<string> myidiomas = {"Ingles","Chines","Mandarim","Hindi","Espanhol",
    "Frances","Arabe","Bengali","Russo","Portugues","Indonesio"};

        for(string x : myidiomas){
            if(lingue == x){
                numerocidade = ++numerocidade;
                break;
            }
        }
        if(numerocidade <= 0)
            throw std::invalid_argument("Argumento invalido");
}
///Armazena o valor do idioma e utiliza o this-> para referenciar o idioma como lingua.
void Idioma::setLingua(string idioma){
    validar(idioma);
    this->lingua = idioma;
}

///Fun��o Nota::validar recebe um int num e define que se o valor de num for maior que 10 ou menor que 0 um erro vai aparecer, mostrando que aquele argumento � invalido.
void Nota::validar(int num){
        if(num >10 || num <0)
            throw std::invalid_argument("Argumento invalido");

}
///Armazena o valor do int numero e utiliza o this-> para referenciar o numero como nomeNota.
void Nota::setValor(int numero){
    validar(numero);
    this->nomeNota = numero;
}

///Fun��o Descricao::validar recebe um string descri e define que se o valor de descri for maior que 40 ou menor que 0 um erro vai aparecer, mostrando que aquele argumento � invalido.
///Al�m disso, verifica dentro de um loop se existe caracteres inapropriados como . , ; : ? ! -
void Descricao::validar(string descri){
   int n = descri.length();
    if(n >40 || n<=0)
        throw invalid_argument("Argumento invalido");
     for (int x = 0; x < n; x++) {
        if(x<n){
            if(descri[x] == '.'&& descri[++x]== '.'){
            throw invalid_argument("Argumento invalido");
            break;
}
       if(descri[x] == ','&& descri[++x]== ','){
            throw invalid_argument("Argumento invalido");
            break;
}
       if(descri[x] == ';'&& descri[++x]== ';'){
            throw invalid_argument("Argumento invalido");
            break;
}
       if(descri[x] == ':'&& descri[++x]== ':'){
            throw invalid_argument("Argumento invalido");
            break;
}
       if(descri[x] == '?'&& descri[++x]== '?'){
            throw invalid_argument("Argumento invalido");
            break;
}
       if(descri[x] == '!'&& descri[++x]== '!'){
            throw invalid_argument("Argumento invalido");
            break;
}
       if(descri[x] == '-'&& descri[++x]== '-'){
            throw invalid_argument("Argumento invalido");
            break;
}
        if(descri[x] == ' '&& descri[++x]== ' '){
            throw invalid_argument("Argumento invalido");
            break;
        }
    }
}

}
///Armazena o valor do string descri e utiliza o this-> para referenciar o descri como des.
void Descricao::setDes(string descri){
    validar(descri);
    this->des=descri;
}

///Fun��o Nome::validar recebe um string nome e define que se o valor de nome for maior que 30 um erro vai aparecer, mostrando que aquele argumento � invalido.
/// Al�m disso, h� algumas outras valida��es que verificam se as letras adicionadas no nome fazem parte do alfabeto conhecido como ASCII.
void Nome::validar(string nome){
        int x=0;
        int n= nome.length();
        if(n>30){
            throw invalid_argument("Argumento invalido");
        }
        for(int i=0;i<n;i++){
            if(nome[0]<'A' && nome[0]>'Z'){
                throw invalid_argument("Argumento invalido");
        }
            if(i>0){
                if(nome[i]!=' '){
                    if(nome[i]<'a'|| nome[i]>'z'){
                        throw invalid_argument("Argumento invalido");
            }

              }else{
                if(nome[++i]==' '){
                    throw invalid_argument("Argumento invalido");
                }else{
                    if(nome[i]<'A' || nome[i]>'Z'){
                        throw invalid_argument("Argumento invalido");
                    }

                }
            }
        }
    }
}
///Armazena o valor do string nome e utiliza o this-> para referenciar o nome como nome.
void Nome::setNome(string nome){
    validar(nome);
    this->nome=nome;
}

///Fun��o Senha::validar recebe um string senha e verifica o tamanho dos vetores senha, cada vez que um caracter � adicionado na senha o valor +1 � adicionado ao contador e no fim disso tudo
///Verificamos se o as variaveis letra, digito e caracterEspeciais s�o menores que 1, se alguma delas for menor que um, um erro � lan�ado.
void Senha::validar(string senha){

 int tamstring = senha.length();
    int letra=0;
    int digito = 0;
    int caracterEspecial = 0;
    for(int i=0;i<tamstring;i++){
        if(senha[i]>= 48 && senha[i]<=57){
            digito = ++digito;
        }if(senha[i]>= 'a'&& senha[i]<='z'){
            letra = ++letra;
        } if(senha[i]>= 'A'&& senha[i]<='Z'){
             letra = ++letra;
        }if(senha[i]>=33 && senha[i]<=38){
            caracterEspecial=++caracterEspecial;
        }


    }
     if(letra <1 || digito<1 || caracterEspecial <1){
        throw invalid_argument("argumento invalido");
        }


}

///Armazena o valor do string senha e utiliza o this-> para referenciar o senha como nome_senha.
void Senha::setNome_senha(string senha){
    validar(senha);
    this->nome_senha=senha;
}

///Fun��o Data::validar recebe um string data, define o vetor mesi[3] e posiciona um vetor em cada umas das posi��es desse vetor. Come�a as verifica��es do tamanho da data, se por acaso for diferente de 6
/// um erro � lan�ado, se for igual a 6, uma verifica��o � feita com o valor de cada um dos vetores posicionados nas posi��es do vetor Mesi, assim validando a data.
void Data::validar(string data){
    int tamanhoData= data.length();
    char mesi[3];
    mesi[0]=data[3];
    mesi[1]=data[4];
    mesi[2]=data[5];
    string mes=mesi;

    if(tamanhoData != 6){
        throw invalid_argument("argumento invalido");
    }else{
            if(data[0] <48 ||data[0]>51){
                throw invalid_argument("argumento invalido");
            }
            if(data[0]>50 && data[1]>49){
                throw invalid_argument("argumento invalido");
            }

            if(data[1] <48 ||data[1]>57){
                throw invalid_argument("argumento invalido");
            }
            if(data[2] != '/'){
                throw invalid_argument("argumento invalido");
            }
            if(mes != "Jan" && mes != "Fev" && mes != "Mar" && mes != "Abr" && mes != "Mai" && mes != "Jun" && mes != "Jul" && mes != "Ago"&& mes != "Set" && mes != "Out" && mes != "Nov" &&mes != "Dez"){
                throw invalid_argument("argumento invalido");

            }


    }


}
///Armazena o valor do string datinha e utiliza o this-> para referenciar o datinha como data_nome.
void Data::setData_nome(string datinha){
    validar(datinha);
    this->data_nome=datinha;
}

///Fun��o Codigo::validar recebe um string codigo, salva o tamanho do codigo e faz uma verifica��o em loop dentro do tamanho do codigo, verificando se o tamanho do vetor � menor que 48 ou maior que 57.
///Al�m disso, chama a fun��o checkLuhn para verificar se o c�digo � valido ou n�o
void Codigo::validar(string codigo){
int tamanho = codigo.length();
for(int i=0;i<tamanho;i++){
    if(codigo[i]<48 || codigo[i]>57){
        throw invalid_argument("argumento invalido");
    }
}
if(checkLuhn(codigo)){}
else{
 throw invalid_argument("argumento invalido");
}

}
///Armazena o valor do string codigo e utiliza o this-> para referenciar o codigo como nome_Codigo.
void Codigo::setValor(string codigo){
    validar(codigo);
    this->nomeCodigo=codigo;
}

///Fun��o Email::validar recebe um string email, salva o tamanho do email e faz uma verifica��o sobre o caracter . se ele for encontrado na primeira posi��o do vetor um erro � lan�ado, depois disso
///Uma nova verifica��o � feita, tentando definir o tamanho maximo antes do @ e depois tentando identificar o tamanho total do email.
void Email::validar(string email){
int tamanho = email.length();
    if(email[0]=='.')
        throw invalid_argument("argumento invalido");
    for(int i=0;i<tamanho;i++){
        if(email[i]=='@'){
            if(i>64)
                throw invalid_argument("argumento invalido");
        }
        if(email[i] >32 && email[i] <48 ){
            int n=++i;
            if(email[n] >48 && email[n] < 59 ||email[n] >64 && email[n] < 91 || email[n] >60 && email[n] < 123){

            }else{
                throw invalid_argument("argumento invalido");
            }
        }
    }

}

///Armazena o valor do email codigo e utiliza o this-> para referenciar o email como nome_email.
void Email::setNomeemsil(string email){
    validar(email);
    this->nome_email=email;
}
