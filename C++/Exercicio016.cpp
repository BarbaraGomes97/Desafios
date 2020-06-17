// Sortear um nome entre 4 lidos e imprimir o mesmo na tela
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    int c=1, num, sorteio;
    string nome, n0, n1, n2, n3;
    cout << "Digite o 1o. nome: ";
    cin >> n0;
    cout << "Digite o 2o. nome: ";
    cin >> n1;
    cout << "Digite o 3o. nome: ";
    cin >> n2;
    cout << "Digite o 4o. nome: ";
    cin >> n3;
    srand(time(NULL));
    sorteio = rand() % 4;
    if (sorteio == 0){
        cout << "\nO nome sorteado foi " << n0 << "!" << endl;
    }
    else{
        if (sorteio == 1){
            cout << "\nO nome sorteado foi " << n1 << "!" << endl;
        }
        else{
            if (sorteio == 2){
                cout << "\nO nome sorteado foi " << n2 << "!" << endl;
            }
            else{
                cout << "\nO nome sorteado foi " << n3 << "!" << endl;
            }
        }
    }   
    return 0;
}
