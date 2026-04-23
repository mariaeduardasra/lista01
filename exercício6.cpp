#include <iostream>
#include <math.h>
using namespace std;

int main (int argc, char** argv)
{
	double a,b,media;
	
	cout << "Informe 2 numeros para descobrir a media geometrica: ";
	
	cin >> a >> b;
	media = sqrt(a * b);
	
	cout << " Media geometrica:  " << media;
	return 0;
}