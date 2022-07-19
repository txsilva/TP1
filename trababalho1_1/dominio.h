#include <stdexcept>

using namespace std;

class Nota{
    private:
        int nota;
        static const int LIMITEMENOR = 0;
        static const int LIMITEMAIOR = 10;
        void validar(int);
    public:
        //set e get Nota
        void setValor(int nota1);
        int getValor() const;
};
//getValor de nota
inline int Nota::getValor() const{
    return nota;
}

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
