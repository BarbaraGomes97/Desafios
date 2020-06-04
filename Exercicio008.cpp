#include <iostream>
using namespace std;
int main(){
    int c, n;
    cout << "T A B U A D A\n";
    cout << "Digite um numero para consulta: ";
    cin >> n;
    // Estrutura de repetição para saída de dados
    for (c=0; c<=10; c+=1){
        cout << n << " x " << c << " = " << c*n << "\n";
    }
    return 0;
}