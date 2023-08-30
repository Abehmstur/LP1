#include <iostream>

using namespace std;

/* void somar(int *soma, int y){
    *soma = *soma + y;
}

int main(){
    
    int soma = 10;

    cout << "Antes da funcao: " << soma << endl;
    
    somar(&soma, 15);
    
    cout << "Dps da funcao:" << soma << endl;

    return 0;
} */

//ponteiros

int main(){
    system("clear");

    int *ponteiro;

    int varComum;

    ponteiro = &varComum;

    cout << "VarComum: " << varComum << endl;
    cout << "POnteiro: " << ponteiro << endl;
    cout << "&varComum: " << &varComum << endl;
    return 0;
}

// cpp permite sobrecarga de funções.
// ou seja, criar mais de uma funcao com mesmo nome.