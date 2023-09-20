#include <iostream>
#include <map>
#include "aluno.hpp"

using namespace std;

map<string, notas> aluno;

void cadastarAlunos(string nome, float n1, float n2, float n3){
    aluno[nome].nota01 = n1;
    aluno[nome].nota02 = n2;
    aluno[nome].nota03 = n3;
    cout << "Aluno cadastrado com sucesso!" << endl;

}


void removerAlunos(string nome){
    aluno.erase(nome);
}

void listarAlunos(){
    map<string, notas>::iterator it;

    for(it = aluno.begin(); it != aluno.end(); it++){
        cout << "Aluno: " << it->first << endl;
        cout << "Nota 01 " << it->second.nota01 << endl;
        cout << "Nota 02 " << it->second.nota02 << endl;
        cout << "Nota 03 " << it->second.nota03 << endl;
    }
}

float calcularMedia(string nome){
    float media = (aluno[nome].nota01 + aluno[nome].nota02 + aluno[nome].nota03)/3;
    return media;
}



