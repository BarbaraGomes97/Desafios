// Faça um programa que leia um ângulo qualquer e mostre na tela o valor do seno, cosseno e tangente desse ângulo.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float an, resp;
    cout << "Digite o angulo: ";
    cin >> an;
    resp = an*3.14/180;
    cout << "\nSeno: " << sin(resp) << "\nCosseno: " << cos(resp) << "\nTangente: " << tan(resp); 
}
