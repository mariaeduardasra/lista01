#include <iostream>

using namespace std;

int main() {
    double a, b, c;

    
    cout << "Digite o valor do primeiro lado (a): ";
    cin >> a;

    cout << "Digite o valor do segundo lado (b): ";
    cin >> b;

    cout << "Digite o valor do terceiro lado (c): ";
    cin >> c;

    cout << endl;

    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
        cout << "Os valores formam um triangulo." << endl;

       
        if (a == b && b == c) {
           
            cout << "Classificacao: Equilatero" << endl;
        } 
        else if (a != b && a != c && b != c) {
            
            cout << "Classificacao: Escaleno" << endl;
        } 
        else {
            
            cout << "Classificacao: Isosceles" << endl;
        }

    } 
    else {
        
        cout << "Os valores digitados NAO formam um triangulo!" << endl;
    }

    return 0;
}