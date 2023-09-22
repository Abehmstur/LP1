/* arquivos
ofstream - o de output
ifstream - i de input
fstream - f junção dos dois

biblioteca <fstream>


#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream arquivo;
    
    arquivo.open("meuArquivo.txt", ios::app); ios::app -> para não apagar

    arquivo << "Olá mundo." << endl;
    arquivo << "Olá mundo.";
    arquivo << "Olá mundo.";

    return 0;
}
CONTINUAÇÃO 21-09-23

ifstream
importa a msm biblioteca
getline(arquivoCriado, OndeAStringVaiSerLida) >> fazer leitura das linhas; todo \n sera uma quebra de linha
arquivo.close >> para fechar o arquivo;

a seguir exemplos

#include <iostream>
using namespace std;
#include <fstream>

int main(int argc, char const *argv[])
{
    ifstream arquivo;
    string linha; // vai  receber os dados lidos do getline
    
    arquivo.open("meuArquivo.txt");
    /* 
    getline(arquivo, linha);
    
    cout << linha << endl;
    essa parte ele lerá linha a a linha
    getline(arquivo, linha);

    cout << linha << endl; 
    //para ler todo o arquivo e não apenas a linha, usamos o while.
    while(getline(arquivo, linha)){
        cout << linha << endl;
    }
    //while()
    return 0;
}

AGORA SERA USADO O FSTREAM QUE FAZ OS DOIS AQUIVOS

ios::out escreve e ios::in faz a leitura
para usar basta:
arquivo.open("MeuArquivo"ios::out);
exemplos
*/

/* #include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    fstream arquivo;
    string guardaLeitura;

    arquivo.open("meuArquivo.txt", ios::out|ios::app);

    arquivo << "Aqui eu continuo a escrita." << endl;
    
    arquivo.open("meuArquivo.txt", ios::in);


    while (getline(arquivo, guardaLeitura))
    {
        cout << guardaLeitura << endl;
    }

    
    return 0;
} */


//usando o vector para guardar
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    fstream arquivo;
    string guardaLeitura;

    arquivo.open("meuArquivo.txt", ios::out|ios::app);

    arquivo << "Aqui eu continuo a escrita." << endl;
    
    arquivo.open("meuArquivo.txt", ios::in);


    while (getline(arquivo, guardaLeitura))
    {
        cout << guardaLeitura << endl;
    }
    arquivo.close();
    
    return 0;
}



