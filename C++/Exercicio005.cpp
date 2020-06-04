// Ler um número, informar seu dobro, tripo e raiz quadrada
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    cout << "-----------------------\n";
    cout << "Dobro de " << num << ": " << num*2 << "\n";
    cout << "Triplo de " << num << ": " << num*3 << "\n";
    cout << "Raiz quadrade de " << num << ": " << sqrt(num) << "\n";
    cout << "-----------------------";
    return 0;
}