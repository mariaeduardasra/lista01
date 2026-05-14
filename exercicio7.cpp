#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	float milhas, km;
	
    cout << "Milhas maritimas:  ";
	
	cin >> milhas;
	km = milhas * 1.852;
	
	cout << "Km: " << km << endl;
	return 0;