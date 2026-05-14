#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	float celsius, farenheit;
	
	cout << "Digite uma temperatura em graus Celsius: ";
	
	cin >> celsius;
	farenheit = (celsius * 9/5) + 32;
	
	cout << "farenheit: " << farenheit;
	return 0;
}