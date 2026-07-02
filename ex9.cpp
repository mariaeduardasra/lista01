#include <iostream>

using namespace std;

int main() {
    double peso, altura, R;
    char sexo;

    
    cout << "Digite o peso (em kg): ";
    cin >> peso;

    cout << "Digite a altura (em metros): ";
    cin >> altura;

    cout << "Digite o sexo (F para Feminino, M para Masculino): ";
    cin >> sexo;

    
    R = peso / (altura * altura);

    cout << endl;
    cout << "Relacao peso/altura^2 (R): " << R << endl;

    
    if (sexo == 'F' || sexo == 'f') {
        
        if (R < 19) {
            cout << "Mensagem: Abaixo do peso" << endl;
        } 
        else if (R >= 19 && R < 24) {
            cout << "Mensagem: Peso ideal" << endl;
        } 
        else {
            cout << "Mensagem: Acima do peso" << endl;
        }
        
    } 
    
    else if (sexo == 'M' || sexo == 'm') {
        
        if (R < 20) {
            cout << "Mensagem: Abaixo do peso" << endl;
        } 
        else if (R >= 20 && R < 25) {
            cout << "Mensagem: Peso ideal" << endl;
        } 
        else { 
            cout << "Mensagem: Acima do peso" << endl;
        }
        
    } 
   
    else {
        cout << "Sexo invalido! Use apenas F ou M." << endl;
    }

    return 0;
}