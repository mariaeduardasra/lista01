#include <iostream>

using namespace std;

int main() {
    
    double P1, P2, media;

   
    cout << "Digite a nota da primeira avaliacao (P1): ";
    cin >> P1;

    cout << "Digite a nota da segunda avaliacao (P2): ";
    cin >> P2;

    
    media = (P1 + (2 * P2)) / 3;

    
    cout << endl;
    cout << "Media final do aluno: " << media << endl;

    
    if (media >= 5.0) {
        cout << "Situacao: Aprovado" << endl;
    } 
    else {
        cout << "Situacao: Reprovado" << endl;
    }

    return 0;
}