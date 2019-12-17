#include "Endereco.h"

using namespace std;

Endereco::Endereco()
{
    rua = "";
   numero = "";
   bairro = "";
   cidade = "";
   estado = "";
   cep = "";

}

Endereco::Endereco(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string estado, std::string cep)
{
    setRua(rua);
    setNumero(numero);
    setBairro(bairro);
    setCidade(cidade);
    setEstado(estado);
    setCep(cep);

}

std::string Endereco::getRua(){
    return rua;
}
std::string Endereco::getNumero(){
    return numero;
}
std::string Endereco::getBairro(){
    return bairro;
}
std::string Endereco::getCidade(){
    return cidade;
}
std::string Endereco::getEstado(){
    return estado;
}
std::string Endereco::getCep(){
    return cep;
}

void setRua(std::string rua){
    this->rua = rua;
}
void setNumero(std::string numero){
    this->numero = numero;
}
void setBairro(std::string bairro){
    this->bairro = bairro;
}
void setCidade(std::string cidade){
    this->cidade = cidade;
}
void setEstado(std::string estado){
    this->estado = estado;
}
void setCep(std::string cep){
    this->cep = cep;
}

std::string Endereco::getString(){
    return rua + " " + numero + " " + bairro + " " + cidade + " " + estado + " " + cep;
}
Endereco::~Endereco()
{
    //dtor
}
