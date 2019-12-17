#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>


class Endereco
{
    public:
        Endereco();
        Endereco(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string estado, std::string);
        virtual ~Endereco();
        std::string getRua();
        std::string getNumero();
        std::string getBairro();
        std::string getCidade();
        std::string getEstado();
        std::string getCep();

        void setRua(std::string rua);
        void setNumero(std::string numero);
        void setBairro(std::string bairro);
        void setCidade(std::string cidade);
        void setEstado(std::string estado);
        void setCep(std::string cep);

        std::string getString();


    private:
    std::string rua, numero, bairro, cidade,estado, cep;

};

#endif // ENDERECO_H
