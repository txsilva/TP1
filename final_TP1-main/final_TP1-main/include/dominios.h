#ifndef DOMINIOS_H
#define DOMINIOS_H


#include <string>
using namespace std;
///classe referente a Nome
class Nome {
    private:
        string nome;
        void validar(string);
    public:
        void setNome(string);
        string getNome()const;
};
inline string Nome::getNome()const{
    return nome;
}

///classe referente a Email
class Email{
    private:
        string nome_email;
        void validar(string);
    public:
        void setNomeemsil(string);
        string getNomeemail()const;
};
inline string Email::getNomeemail()const{
    return nome_email;
}

class Senha{
    private:
        string nome_senha;
        void validar(string);
    public:
        void setNome_senha(string);
        string getNome_senha()const;
};
inline string Senha::getNome_senha()const{
    return nome_senha;
}

///classe referente ao idioma
class Idioma{
    private:
        string lingua;
        void validar(string);
    public:
        void setLingua(string);
        string getLingua()const;
};
inline string Idioma::getLingua()const{
return lingua;
}

///classe refente a data.
class Data{
    private:
        string data_nome;
        void validar(string);
    public:
        void setData_nome(string);
        string getData_nome()const;
};
inline string Data::getData_nome()const{
    return data_nome;
}

///classe referente a descrição.
class Descricao{
    private:
        string des;
        void validar(string);
    public:
        void setDes(string);
        string getDes()const;
};
inline string Descricao::getDes()const{
return des;
}

//classe código
class Codigo {
    private:
        string nomeCodigo;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Codigo::getValor() const{
    return nomeCodigo;
}
//classe cidade
class Cidade {
    private:
        string nomeCidade;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Cidade::getValor() const{
    return nomeCidade;
}
//classe pais
class Pais {
    private:
        string nomePais;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Pais::getValor() const{
    return nomePais;
}

//classe nota
class Nota {
    private:
        static const int LIMITE = 10;       // Declaração para evitar números mágicos.
        int nomeNota;
        void validar(int);
    public:
        void setValor(int);
        int getValor() const;
};

inline int Nota::getValor() const{
    return nomeNota;
}






#endif // DOMINIOS_H
