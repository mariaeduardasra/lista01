#include <iostream>

using namespace std;

int main() {
   
    double n1, n2;

    cout << "Digite um numero valor: ";
    cin >> n1;

    cout << "Digite um outro numero diferente do anterior: ";
    cin >> n2;

    
    cout << endl;

   
    if (n1 > n2) {
        cout << "O maior valor e: " << n1 << endl;
    } else if (n2 > n1) {
        cout << "O maior valor e: " << n2 << endl;
    } else {
        cout << "Os valores digitados sao iguais!" << endl;
    }

    return 0;
}