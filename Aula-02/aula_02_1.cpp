#include <iostream>

using namespace std;

int main(void){
    int val;

    string resultado;

    cout << "Informe o valor da media: \n";
    cin >> val;
   
    (val >= 5) ? resultado = "Aprovado" : resultado = "Reprovado";

    cout << "O aluno(a) foi: " << resultado << endl;

    return 0;
}