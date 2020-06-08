// Escreva um programa que pergunte a quantidade de Km percorridos por um carro alugado e a quantidade de dias pelos quais ele foi alugado. Calcule o preço a pagar, sabendo que o carro custa R$60 por dia e R$0,15 por Km rodado.
#include <iostream>
using namespace std;
int main(){
    float km;
    int dias;
    cout << "Quantidade de km percorrido: ";
    cin >> km;
    cout << "Quantidade de dias alugado: ";
    cin >> dias;
    cout << "\n" << km << "km percorrido\nAlugado a " << dias << " dias\nValor total do aluguel: R$" << 60*dias+0.15*km;
}
