#include <iostream>

int main (){
	using namespace std;
	float nota, nota1, nota2;
	cout << "Inisira suas tres notas: ";
	cin >> nota;
	cin >> nota1;
	cin >> nota2;

	nota = nota * 2;
	nota1 = nota1 * 4;
	nota2 = nota2 * 6;
	cout << "Sua media final e: " << (nota + nota1 + nota2) / 12 << "\n";
	return 0;
}

