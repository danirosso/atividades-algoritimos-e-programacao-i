/**************************************************************************************
 **********************  Verificador de CPF TOTAL-LEGIT!  ******************************
 * Criadores: Alison Brito * Daniel Rosso * Gabriel Alves * Luiz Carlos * Romulo Cesar *
 *************************             VERSAO 3.0       ********************************
 **************************************************************************************/

#include <iostream>

int main() {

	using namespace std;
	int cpf, d1, d2, d3, d4, d5, d6, d7, d8, d9, primeiroDigitoCalculado, segundoDigitoCalculado;
	// cria varios numeros inteiros, um pro cpf, um pra cada digito separados
	// e mais um para os digitos calculados

	cout << "Insira um numero de oito ou nove digitos: ";
	cin >> cpf;
	//pede pro usuario o numero do cpf

	if (cpf > 99999 && cpf <= 999999999) {
		d9 = cpf % 10;		// pega o ultimo digito do numero cpf	
		cpf = cpf / 10;		// iguala o numero do cpf a ele mesmo /10
		d8 = cpf % 10;		// isso se repete ate que os digitos acabem
		cpf = cpf / 10;
		d7 = cpf % 10;
		cpf = cpf / 10;
		d6 = cpf % 10;				
		cpf = cpf / 10;
		d5 = cpf % 10;
		cpf = cpf / 10;
		d4 = cpf % 10;
		cpf = cpf / 10;
		d3 = cpf % 10;
		cpf = cpf / 10;
		d2 = cpf % 10;
		cpf = cpf / 10;
		d1 = cpf % 10;
		cpf = cpf / 10;

		primeiroDigitoCalculado = d1 * 10 + d2 * 9 + d3 * 8 + d4 * 7 + d5 * 6 + d6 * 5 + d7 * 4 + d8 * 3 + d9 * 2;	//aplica a primeira equacao

		if (primeiroDigitoCalculado % 11 < 2) {
			primeiroDigitoCalculado = 0;
		} else {
			primeiroDigitoCalculado = 11 - (primeiroDigitoCalculado % 11);
		} //aplica a regra dada no problema

		segundoDigitoCalculado = d1 * 11 + d2 * 10 + d3 * 9 + d4 * 8 + d5 * 7 + d6 * 6 + d7 * 5 + d8 * 4 + d9 * 3 + primeiroDigitoCalculado * 2;		//aplica a segunda equacao
		cout << "Segunda equacao: " << segundoDigitoCalculado << "\n";

		if (segundoDigitoCalculado % 11 < 2) {
			segundoDigitoCalculado = 0;
		} else {
			segundoDigitoCalculado = 11 - (segundoDigitoCalculado % 11);
		} //aplica a regra dada no problema

		cout << "O CPF obtido com esses numeros e: " << d1 << d2 << d3 << "." 
			<< d4 << d5 << d6 << "." << d7 << d8 << d9 << "-" 
			<< primeiroDigitoCalculado << segundoDigitoCalculado << "\n";
		//imprime um digito atras do outro, podemos aproveitar isso
		//e fazer uma separacao no numero, para facilitar a leitura

		return 0;// nao temos ferramentas o suficiente para fazer um sistema de menus
			 // entao o programa retorna zero pro terminal
			 // que significa "terminou sem erros"

	} else if (cpf < 99999) {
		cout << "Voce inseriu um numero menor, reinicie o programa.\n";
		return 0;} else {
			cout << "Voce inseriu um numero maior, reinicie o programa.\n";
			return 0;
		}// mesma logica de antes, nao temos ferramentas pra fazer
		 // um sistema de menu mais interativo ainda
		 // entao o programa so pode fechar se houver um problema

}
