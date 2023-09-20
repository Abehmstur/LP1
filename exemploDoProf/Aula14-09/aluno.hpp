#ifndef ALUNO_HPP
#define ALUNO_HPP
#include <string>

typedef struct{
    float nota01;
    float nota02;
    float nota03;
}notas;

void cadastarAlunos(std::string nome, float n1, float n2, float n3);
void listarAlunos();
void removerAlunos(std::string nome);
float calcularMedia(std::string nome);

#endif