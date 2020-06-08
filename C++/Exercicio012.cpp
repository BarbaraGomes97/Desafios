// Conversor de temperatura de C° para F°
#include <iostream>
using namespace std;
int main(){
    float temp;
    cout << "Digite o valor em Celcius: ";
    cin >> temp;
    cout << "\n" << temp << " C equivale a " << (9*temp/5)+32 << " F"; 
}
