#include <iostream>

using namespace std;

int main() {
   
    double peso, altura, R;

   
    cout << "Digite o peso (em kg): ";
    cin >> peso;

    cout << "Digite a altura (em metros): ";
    cin >> altura;

    
    R = peso / (altura * altura);

  
    cout << endl;
    cout << "Relacao peso/altura^2 (R): " << R << endl;

    
    if (R < 20) {
        cout << "Mensagem: Abaixo do peso" << endl;
    } 
    else if (R >= 20 && R < 25) {
        cout << "Mensagem: Peso ideal" << endl;
    } 
    else { // R >= 25
        cout << "Mensagem: Acima do peso" << endl;
    }

    return 0;
}