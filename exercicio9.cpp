#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	float diametro, raio, area;
	
	cout << "Digite o diametro do circulo: ";
	
	cin >> diametro;
	raio = diametro / 2;
	area = 3.1416 * pow(raio, 2);
	
	cout << "Area: " << area;
	return 0;
}