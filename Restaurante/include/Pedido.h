#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido
{
    public:
        Pedido();
        Pedido(int numero, int quantidade, std::string descricao, double preco);
        virtual ~Pedido();

        int getNumero();
        int getQuantidade();
        std::string getDescricao()
        double getPreco();

        void setNumero(int numero);
        void setQuantidade(int quantidade);
        void setDescricao(std::string descricao);
        void setPreco(double preco);

    private:
        int numero, quantidade;
        std::string descricao;
        double preco;
};

#endif // PEDIDO_H
