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
    public:
        //set e get Cidade
        void setnomeCidade(string nome);
        string getnomeCidade();
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
