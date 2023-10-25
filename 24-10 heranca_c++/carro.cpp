#include "carro.hpp"
#include <iostream>

using namespace std;

string Carro::getChassi(){
    return chassi;
};

void Carro::setChassi(const string novoChassi){
    this->chassi = novoChassi;
};
