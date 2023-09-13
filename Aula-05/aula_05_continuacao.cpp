/* 
 Deque - Set - Map 
 
Deque - permite uma variedade de operações, empilhar, desempilhar elementos e mambas as pontas.
adiciona ou remove no início e no fim.

Existem vários comandos do Deque no SLIDE.

Set - 



*/
/* #include <iostream>
#include <deque>
using namespace std;

// int deque

int main(int argc, char const *argv[])
{
    system("clear");

    deque <int> deque1 ;

    deque1.push_front(1);
    deque1.push_front(2);
    deque1.push_front(3);
    deque1.push_front(4);

    for (size_t i = 0; i < deque1.size(); i++)
    {
        cout << "valores do deque: \n" << deque1.front() << endl;
    }
    
    return 0;
} */
/*
#include <iostream>
#include <set>
using namespace std;

// int SEt não recebe valores iguais

 int main(int argc, char const *argv[])
{
    system("clear");

    set <int> set1 ;
    set <int>::iterator it;
    it = set1.begin();

    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.insert(2);
    set1.insert(3);
    set1.insert(4);

    cout << "tamanho do set: \n" << set1.size() << endl;

    /* for (size_t i = 0; i < set1.size(); i++)
    {
        cout << "valores do deque: \n" << set1.front() << endl;
    } */
   /* 
    return 0;
} */

#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    system("clear");
    map <string, float> map1;

    map1["francisco"] = 1;
    map1["peter"] = 10;

    map1.insert(pair<string, float> ("francisco", 1));

    cout << map1["francisco"] << endl;

    return 0;
}
