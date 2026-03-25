#include <iostream>

int main (void){
	using namespace std;
	float s1, c1, c2;
	cout << "Insira o salario do Joao: ";
	cin >> s1;
	cout << "Insira o valor das duas contas: ";
	cin >> c1 >> c2;
	cout << "O restante do salario e: " << s1 - (c1 * 1.02) - (c2 * 1.02) << "\n"; 
	return 0;
}

