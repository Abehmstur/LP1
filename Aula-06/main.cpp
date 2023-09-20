/* arquivos
ofstream - o de output
ifstream - i de input
fstream - f junção dos dois

biblioteca <fstream>

*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream arquivo;
    
    arquivo.open("meuArquivo.txt");

    arquivo << "Olá mundo." << endl;
    arquivo << "Olá mundo.";
    arquivo << "Olá mundo.";

    return 0;
}