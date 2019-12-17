#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa()
{
    nome = "";
    endereco = "";
    telefone =  "0000-0000";

Pessoa::Pessoa(std::string nome, Endereco endereco, std::string telefone)
{
    setNome(nome);
    setEndereco(endereco);
    setTelefone(telefone);
    //ctor
}

Pessoa::Pessoa(std::string nome)
{
    setNome(nome);
    endereco = "";
    telefone =  "0000-0000";
}

std::string getNome(){
    return nome;
}
Endereco getEndereco(){
    return endereco;
}
std::string getTelefone(){
    return telefone
}

void setNome(std::string nome);
void setEndereco(Endereco endereco);
void setTelefone(std::string telefone);

Pessoa::~Pessoa()
{
    //dtor
}
