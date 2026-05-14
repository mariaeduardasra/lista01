#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	float p1, p2, p3, p4, p5, total, pagamento, troco;
	
	cout << "Informe o valor de 5 produtos para calcular o valor do troco: ";
	cin >> p1;
	cin >> p2;
	cin >> p3;
	cin >> p4;
	cin >> p5;
	
	total = p1 + p2 + p3 + p4 + p5;
	
	cout << "Total de compra: " << total << endl;
	
	cout << "Informe o valor do pagamento: ";
	cin >> pagamento;
	
	
	troco = pagamento - total;
	
	cout << "troco: " << troco;
	return 0;
}