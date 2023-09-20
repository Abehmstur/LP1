#include <iostream>
#include "aluno.hpp"

using namespace std;

int main(){

int selecao;

while(selecao != 5){
    
    cout << "O q deseja fazer?" << endl;
    cout << "1 Cadastrar aluno" << endl;
    cout << "2 Remover aluno" << endl;
    cout << "3 Listar aluno" << endl;
    cout << "4 calcular media aluno" << endl;
    cout << "5 Sair" << endl;

    if(selecao == 1){
        string nome;
        float nota1, nota2, nota3;
        cout << "Nome: ";
        cin >> nome;
        cout << "Nota: ";
    }
}

cadastarAlunos("Francisco", 10, 5, 2);
cadastarAlunos("Joao", 10, 9, 8);
cadastarAlunos("Pedro", 7, 5, 8);

//removerAlunos("Joao");

listarAlunos();

    return 0;
}