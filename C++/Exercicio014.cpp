// Faça um programa que leia o comprimento do cateto oposto e do cateto adjacente de um triângulo retângulo. Calcule e mostre o comprimento da hipotenusa.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float c1, c2;
    cout << "Comprimento do cateto oposto: ";
    cin >> c1;
    cout << "Comprimento do cateto adjacente: ";
    cin >> c2;
    cout << "A hipotenusa vai medir: " << hypot(c1,c2);
}
