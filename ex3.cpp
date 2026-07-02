#include <iostream>

using namespace std;

int main() {
    double n1, n2, n3;


    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    cout << "Digite o terceiro numero: ";
    cin >> n3;

    cout << endl;

   
    double maior = n1;
    
    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }

    
    if (n1 == n2 && n2 == n3) {
        cout << "Nao existe um maior destacado, os numeros sao identicos!" << endl;
    } 
    else {
        
        cout << "O(s) maior(es) valor(es) encontrado(s): ";
        
        if (n1 == maior) cout << n1 << " ";
        if (n2 == maior) cout << n2 << " ";
        if (n3 == maior) cout << n3 << " ";
        
        cout << endl;
    }

    return 0;
}