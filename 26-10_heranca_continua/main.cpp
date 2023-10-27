#include <iostream>
using namespace std;

class Pessoa{
    
    string cpf;
    string nome;
    string idade;

    public:
        Pessoa(){
            this->cpf = "000.000.000.00";
            this->idade = "00";
            this->nome = "joao";
        }
        Pessoa(string nome, string cpf, string idade){
            this->cpf = cpf;
            this->idade = idade;
            this->nome = nome;
        }
        void setNome(string nome);
        void setCpf(string cpf);
        void setIdade(string idade);
        string getIdade();
        string getNome();
        string getCpf();
};

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setIdade(string idade){
    this->idade = idade;
}

void Pessoa::setCpf(string cpf){
    this->cpf = cpf;
}

string Pessoa::getIdade(){
    return this->idade;
};
string Pessoa::getNome(){
    return this->nome;
};
string Pessoa::getCpf(){
    return this->cpf;
};

class Aluno:public Pessoa {
    private:
        string matricula;
        string curso;
    public:
        Aluno(string matricula, string curso, string cpf, string nome, string idade)
        :Pessoa(cpf,nome,idade){//este : Pessoa() é para pegar os parâmetros da pessoa mãe dentro do filho aluno. 

        };

};

int main()
{
    
    Aluno Maria("123","BTI","13.123.123.123", "Maria", "33");

    Pessoa teste;

    cout << "CPF >> "<< Maria.getNome() << endl;
    cout << "CPF >>" << teste.getCpf() << endl;
    return 0;
}

//HERANCA MULTIPLA
/*
mãe
class Veiculo{}

mãe 
class BemMovel{

}

filho >> carro é um veículo e um bem móvel
class Carro : public Veiculo, BemMovel{

}


//outro exemplo
Pessoa
Funcionario

ASG : pessoa, funcionario
Gerente : pessoa, funcinario

*/