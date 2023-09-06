// Listas
// Filas
// Pilhas
// Vector

/*
MAKEFILE 
- Variáveis
- Dependências
- Comandos
- Comentários 

TIPOS ABSTRATOS DE DADOS - tad


BIBLIOTECA STACK
para pilhas
pilha.push()adciona um elemento a pilha
.pop() remove o elemento mais recente da pilha
.top() retorna uma referencia dao elemento mais recente da pilha
.empty() verifica se está vazio
.size() tamanho da pilha

para filas (queue)
BIBLIOTECA <QUEUE>
.push() adiciona ao final da fila
.pop() retorna o elemento do inicio da fila

*/

#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <vector>

using namespace std;

/* exemplo pilha 
int main(int argc, char const *argv[])
{
    system("clear");
    stack <int> pilha;

    pilha.push(1);
    pilha.push(2);
    pilha.push(3);
    pilha.push(15);
    pilha.push(11);


    cout << "Antes" << pilha.top() << endl;
    pilha.pop();
    cout << "Depois" << pilha.top() << endl;
    cout << "Tamanho da pilha: " << pilha.size() << endl;
    return 0;
} 
*/

/* exemplo queue fila
int main(int argc, char const *argv[])
{
    system("clear");
    queue <int> fila;

    fila.push(1);
    fila.push(2);
    fila.push(3);
    fila.push(15);
    fila.push(11);


    cout << "Antes" << fila.front() << endl;
    fila.pop(); 
    cout << "Depois" << fila.front() << endl;
    cout << "Tamanho da pilha: " << fila.size() << endl;
    return 0;
} */ 


 /* exemplo lista
int main(int argc, char const *argv[])
{
    system("clear");

    list <int> lista;

    list <int>::iterator it;

    it = lista.begin();

    advance(it, 4);

    lista.insert(it,8);

    cout << it << endl;

    return 0;
} */

// exemplo vector é o mais PICA DE TODOS
//OLHAR O SLIDE

int main(int argc, char const *argv[])
{
    vector <int> vetor;

    vetor.push_back(1);
    vetor.push_back(2);
    vetor.push_back(3);

    cout << vetor[0] << endl;
    return 0;
}

