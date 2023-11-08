/* 
SLIDE
-Métodos virtuais 
-Classes abstrata, é quando apresenta pelo menos um método virtual puro.

INTERFACE
A interface é um conjunto de métodos com corpo vazio.
A interface define apenas o que o objeto expõe, sem ter que fazer.
A interface obriga a classe a fazer o que nela foi declarado.
Caso a classe não implemente corretamente a interface e seus metodos, o sistema retornará um erro.

EXEMPLOS:
*/

#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void fazerBarulho() = 0;//método virtual puro.
    //o métdo virtual puro torna a classe animal abstrata e os filhos dessa classe 
    //são obrigados a implementar esses métodos puros.
    
    /*virtual void comer(){//método virtual não puro, com corpo.
        cout << "Animal comendo." << endl; 
    }*/

    //comer virou virtual
    
    virtual void comer() = 0;
    virtual void andar() = 0;
    virtual void correr() = 0;
        
};

class Cachorro: public Animal{
    public: 
        void fazerBarulho(){
            cout << "Cachorro fazendo barulho..." << endl;
        };
        //gambiarra
        void comer(){};
        void andar(){};
        void correr(){};
};

int main()
{   
    Cachorro dog;
    dog.fazerBarulho();
    return 0;
};
