#include <iostream>

using namespace std;

int main() {
   
    double n1, n2;

    
    cout << "Digite o primeiro valor: ";
    cin >> n1;

    cout << "Digite o segundo valor: ";
    cin >> n2;

    cout << endl; 

   
    if (n1 > n2) {
        cout << "O maior valor e: " << n1 << endl;
    } 
    else if (n2 > n1) {
        cout << "O maior valor e: " << n2 << endl;
    } 
    else {
        
        cout << "Os numeros sao identicos!" << endl;
    }

    return 0;
}