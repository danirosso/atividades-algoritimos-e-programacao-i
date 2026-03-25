#include <iostream>

int main (){
	using namespace std;
	int num;
	cout << "Insira um numero inteiro: ";
	cin >> num;
	if (num % 2 == 0){
		cout << "O numero e par\n";
	}else {
		cout << "O numero e impar\n";
	}
	return 0;
}

