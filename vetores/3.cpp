#include <iostream>
using namespace std;

int main (){
	int vetor[5], cont = 0;

	for (int i = 0; i < 5; i ++){
		cout << "Insira o valor para posicao [" << i << "]: ";
		cin >> vetor[i];
		if (i > 0 && vetor[i] > vetor[0]) cont ++;
	};

	cout << cont << " maiores que o primeiro valor"; 
	return 0;
}
