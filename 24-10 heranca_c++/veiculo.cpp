#include "veiculo.hpp"
#include <iostream>

using namespace std;

string Veiculo::getNome(){
    return nome;
};

string Veiculo::getModelo(){
    return modelo;
};

string Veiculo::getCor(){
    return cor;
};

string Veiculo::getMarca(){
    return marca;
};

string Veiculo::getPlaca(){
    return placa;
};

void Veiculo::setNome(const std::string novoNome){
    this->nome = novoNome;
};

void Veiculo::setModelo(const std::string novoModelo){
    this->modelo = novoModelo;
};

void Veiculo::setCor(const std::string novaCor){
    this->cor = novaCor;
};

void Veiculo::setMarca(const std::string novaMarca){
    this->marca = novaMarca;
};

void Veiculo::setPlaca(const std::string novaPlaca){
    this->placa = novaPlaca;
};

void Veiculo::ligarVeiculo(){
    cout << "O Veiculo esta ligado > vrum... vrum... po po po" << endl;
}