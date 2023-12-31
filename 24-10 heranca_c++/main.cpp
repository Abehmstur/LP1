/*
Heranca
Class Pai/Mãe -> Class Filho

exemplo ::
problema
Class Carro{cor, marca, modelo}
Class Moto{cor, marca, modelo}
Class Caminhao{cor, marca, modelo}
>> problemas >> coisas repetidas

usando Heranca::
Podemos fazer um Class Veiculo{} que engloba todos os métodos das 3 classes anteriores.

objtivo: reuso, produtividade e simplicidade na programação.

construir e estender continuamente classes desenvolvidas mesmo por outras pessoas.

nomes::
{
    Class base
    Class mãe
    SuperClass
}

{
    Class filhas 
    Class Derivadas
}

a classe filha que deve ter o indicador de que é derivada da Class mãe.

sobre HERANCA
declara classe dentro do HPP

Class Veiculo{
    protected: 
        atributos;
    public:
        metodos;
}

o PROTECTED na classe mãe é para que os filhos consigam ver os atributos dela, 
se fosse PRIVATE, eles não conseguiriam.

No cpp chamamos o hpp

e cadastramos os métodos da classe mãe, o encapsulamento.

A classe mãe é uma base, as classes filhas podem criar outros métodos próprios dela.


Como fazer a herança>>
Class Carro : public Veiculo {
    private:
        método próprio da classe carro exemplo:
        string chassi
    public:
        string getClassficacao();
        void setClassificacao;
        void ligar();
        void desligar();
        void acerelar();
}
diferenca entre criar com new e criar sem New
Carro palio; ele fica vivo enquanto o método que ele foi criado existir, dps que ela parar de funcionar ele desaparece.
Carro
*/
#include <iostream>
#include "veiculo.hpp"
#include "carro.hpp"

using namespace std;

int main()
{
    //Carro *palio = new Carro();   
    Carro palio;
       cout << "Teste";
    return 0;
}
