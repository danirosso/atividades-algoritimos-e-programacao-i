#include <iostream>

int main (void){
	using namespace std;
	float distancia, consumo, precoLitro, precoViagem;
	cout << "Insira a distancia: ";
	cin >> distancia;
	cout << "Insira o consumo kilometro por litro: ";
	cin >> consumo;
	cout << "Insira o preco do litro: ";
	cin >> precoLitro;
	precoViagem = (distancia / consumo) * precoLitro;
	cout << precoViagem;
	return 0;
}
