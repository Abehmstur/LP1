#ifndef VEICULO_HPP
#define VEICULO_HPP
#include <iostream>

class Veiculo {
    protected:
        std::string nome, modelo, cor, placa, marca;

    public:
        std::string getNome();
        std::string getModelo();
        std::string getCor();
        std::string getMarca();
        std::string getPlaca();
        void setNome(const std::string novoNome);
        void setModelo(const std::string novoModelo);
        void setCor(const std::string novaCor);
        void setMarca(const std::string novaMarca);
        void setPlaca(const std::string novaPlaca);
        void ligarVeiculo();
};       
#endif