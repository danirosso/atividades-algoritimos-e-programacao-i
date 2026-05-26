#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){

	srand(time(NULL));

	int matriz_m[4][6], matriz_n[6][4], matriz_r[4][4];

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 6; j++){
			matriz_m[i][j] = 2; /* rand() % 10; */
			matriz_n[j][i] = 2; /* rand() % 10; */
		}
	}
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 6; j++){
				cout << matriz_m[i][j] << "  ";
			}
			cout << endl << "-------------" <<endl;
		}

	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 4; j++){
			matriz_r[i][] += matriz_m[i][j] * matriz_n[j][i]
		}
	}

		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 4; j++){
				cout << matriz_r[i][j] << "  ";
			}
			cout << endl << "-------------" <<endl;
		}
	
	return 0;
}
