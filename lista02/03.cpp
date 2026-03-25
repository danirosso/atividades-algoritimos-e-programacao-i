#include <iostream>

int main (){
	using namespace std;
	char letra;
	cout << "Insira uma unica letra: ";
	cin >> letra;
	if (letra == 'a' || letra == 'i' || letra == 'u' || letra == 'e' || letra == 'o'){
		cout << "A letra e uma vogal\n";
	}else{
		cout << "A letra e uma consoante\n";
	}
	return 0;
}
