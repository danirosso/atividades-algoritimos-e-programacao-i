#include <iostream>

int main (){
	using namespace std;
	int hora, minuto;
	cout << "Entre com um numero para as horas: ";
	cin >> hora;
	cout << "Entre com um numero para os minutos ";
	cin >> minuto;
	if (hora <=24 && minuto <=59){
		cout << "A hora e valida\n";
	}else {
		cout << "A hora e invalida\n";
	};
	return 0;
}
