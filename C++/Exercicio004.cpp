// Ler um número e informar seu antecessor e sucessor
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    cout << num-1 << " e o antecessor de " << num << ". Seu sucessor e " << num+1; 
    return 0;
}