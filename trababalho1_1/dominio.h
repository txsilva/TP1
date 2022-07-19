#include <stdexcept>

using namespace std;

class Nota{
    private:
        int nota;
        void validar(int);
    public:
        //set e get Nota
        void setnota(int nota1);
        int getnota();
};

class Cidade{
    private:
        string nomeCidade;
         void validar(string);
    public:
        //set e get Cidade
        void setnomeCidade(string nome);
        string getnomeCidade();
};

class Idioma{
    private:
        string nomeIdioma;
         void validar(string);
    public:
        //set e get Cidade
        void setnomeIdioma(string nome);
        string getnomeIdioma();
};

class Pais{
    private:
        string nomePais;
         void validar(string);
    public:
        //set e get Cidade
        void setnomePais(string nome);
        string getnomePais();
};

class data{
    private:
        string dia, mes;

    public:
        //set e get dia
        void setdia(string datadia);
        string getdia();

        //set e get datames
        void setmes(string datames);
        string getmes();

};
