// Conversão de um valor em metros para centímetos e milímetros
#include <iostream>
using namespace std;
int main(){
    char f = '-';
    float metros;
    cout << "Digite o valor em metros(m): ";
    cin >> metros;
    //Repetição de caractere e saída de dados
    cout << string(25,f) << "\n";
    cout << "Valor para conversao: " << metros << "m (Metros)\n";
    cout << "Valor em centimetros: " << metros*100 << "cm\n";
    cout << "Valor em milimetros: " << metros*1000 << "mm\n";
    cout << string(25,f); 
    return 0;
}