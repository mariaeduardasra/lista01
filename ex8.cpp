#include <iostream>

using namespace std;

int main() {
    double A, B, C;
    double hipotenusa, cateto1, cateto2;

  
    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    cout << "Digite o valor de C: ";
    cin >> C;

    cout << endl;

    
    if (A > B && A > C) {
        hipotenusa = A;
        cateto1 = B;
        cateto2 = C;
    } 
    else if (B > A && B > C) {
        hipotenusa = B;
        cateto1 = A;
        cateto2 = C;
    } 
    else {
        hipotenusa = C;
        cateto1 = A;
        cateto2 = B;
    }

 
    double quadradoHipotenusa = hipotenusa * hipotenusa;
    double somaQuadradoCatetos = (cateto1 * cateto1) + (cateto2 * cateto2);

    
    if (quadradoHipotenusa == somaQuadradoCatetos) {
        cout << "Os valores formam um triangulo retangulo!" << endl;
    } 
    else {
        cout << "Os valores NAO formam um triangulo retangulo." << endl;
    }

    return 0;
}