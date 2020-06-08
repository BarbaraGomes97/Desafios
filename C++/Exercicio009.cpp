// Conversão de reais para dólares
// Na data do exercício, o valor do dolar equivale a R$4.89
#include <iostream>
using namespace std;
int main(){
    float valor;
    cout << "Digite o valor: R$";
    cin >> valor;
    cout << "R$" << valor << " equivale a $" << valor/4.89 << " dolares";
}
