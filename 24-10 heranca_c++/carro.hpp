#ifndef CARRO_HPP
#define CARRO_HPP
#include <iostream>
#include "veiculo.hpp"

class Carro : public Veiculo {
    private:
        std::string chassi;
    public:
        Carro(){
        };
        std::string getChassi();
        void setChassi(const std::string novoChassi);
};       
#endif