#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string nome, Endereco endereco, std::string telefone);
        virtual ~Pessoa();

        std::string getNome();
        Endereco getEndereco();
        std::string getTelefone();

        void setNome(std::string nome);
        void setEndereco(Endereco endereco);
        void setTelefone(std::string telefone);

    private:

    std::string nome;
    Endereco endereco;
    std::string telefone;
};

#endif // PESSOA_H
