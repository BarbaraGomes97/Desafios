// Ler um preço e mostrar seu valor final com 5% de desconto
#include <iostream>
using namespace std;
int main(){
    float valor, desc;
    cout << "Digite o valor do produto: R$";
    cin >> valor;
    desc = valor*5/100;
    cout << "\nPreco final do produto: R$" << valor-desc;
}
