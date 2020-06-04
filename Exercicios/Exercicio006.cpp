//Ler duas notas de um aluno e mostrar sua média
#include <iostream>
using namespace std;
int main(){
    float n1, n2;
    string nome;
    char f = '-';
    cout << "Aluno(a): ";
    cin >> nome;
    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << string(20,f) << "\n";
    cout << "Nome do Aluno(a): " << nome << "\n";
    cout << "Soma das notas: " << n1+n2 << "\n";
    cout << "Media final: " << (n1+n2)/2 << "\n";
    cout << string(20,f);
    return 0;
}