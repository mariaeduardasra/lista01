#include <iostream>

using namespace std;

int main() {
  
    double base, altura, area;

   
    cout << "Digite o valor da base do retangulo: ";
    cin >> base;

    cout << "Digite o valor da altura do retangulo: ";
    cin >> altura;

   
    area = base * altura;

    
    cout << endl;
    cout << "A area do retangulo e: " << area << endl;

    
    if (area > 100) {
        cout << "Terreno grande" << endl;
    } 
    else {
        cout << "Terreno pequeno" << endl;
    }

    return 0;
}