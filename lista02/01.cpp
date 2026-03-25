#include <iostream>

int main (void){
	using namespace std;
	int num;
	cout << "Insira um numero: ";
	cin >> num;
	if (num < 0){
	num = num * -1;
	}
	cout << num << "\n";
	return 0;
}
