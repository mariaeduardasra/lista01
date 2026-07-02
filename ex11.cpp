#include <iostream>

using namespace std;

int main() {
    double P1, P2_necessario;

  
    cout << "Digite o valor da primeira nota (P1): ";
    cin >> P1;

   
    P2_necessario = (15.0 - P1) / 2.0;

    cout << endl;

    
    if (P2_necessario > 10.0) {
        cout << "Para ser aprovado, o aluno precisaria tirar: " << P2_necessario << endl;
        cout << "Atencao: Mesmo tirando nota maxima (10.0), o aluno nao conseguira atingir a media 5." << endl;
    } 
   
    else if (P2_necessario <= 0) {
        cout << "O aluno ja acumulou pontos suficientes para ser aprovado! Nota P2 necessaria: 0.0" << endl;
    } 
    
    else {
        cout << "Para ser aprovado, o aluno precisa tirar na P2 no minimo: " << P2_necessario << endl;
    }

    return 0;
}