#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	float b;
	float h;
	float a;
	
	cout << "Informe a base do triangulo: ";
	cin >> b;
	cout << "Informe a altura do triangulo: ";
	cin >> h;
	
	a = b * h / 2;
	
	cout << "A area do triangulo calculada: " << a;
	
	return 0;
}