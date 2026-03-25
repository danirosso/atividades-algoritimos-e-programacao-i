#include <iostream>

int main (){
	using namespace std;
	int idade, diaHoje,mesHoje,anoHoje,diaUser,mesUser,anoUser;
	if (diaHoje >= diaUser && mesHoje >= mesUser){
		idade = anoHoje-anoUser + 1;
	}else {
		idade=anoHoje-anoUser;
	}
	cout << "Você tem: " << idade << "anos\n";
	return 0;
}

