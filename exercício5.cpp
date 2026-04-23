#include <iostream>
using namespace std;

int main (int argc, char** argv)
{
	double a,b,c,d, media;
	
	cout << "Informe 4 numeros para calcular a media:   ";
	
	cin >> a >> b >> c >> d;
	media = (a + b + c + d) / 4;
	
	cout << " Media:  " << media;
	return 0;