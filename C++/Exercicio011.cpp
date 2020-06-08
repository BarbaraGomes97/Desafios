// Ler um salário e informar seu novo valor com um aumento de 15%
#include <iostream>
using namespace std;
int main(){
    char nome[50];
    float salario, aumento;
    cout << "Nome do funcionario: ";
    cin >> nome;
    cout << "Salario atual: R$";
    cin >> salario;
    aumento = salario*15/100;
    cout << "\nFuncionario: " << nome << "\nSalario sem reajuste: R$" << salario << "\nSalario atualizado: R$" << salario+aumento; 
}
