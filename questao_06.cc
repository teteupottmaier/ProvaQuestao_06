#include <iostream>
using namespace std;
int main () 
{

	int Numero1= 0.0f;
	int Numero2 = 0.0f;
	int Numero3 = 0.0f;
	int Numero4 = 0.0f;
	int MediaS = 0.0f;
	int MediaM = 0.0f;
	int soma = 0.0f;
	int multiplicacao = 0.0f;
	
	cout << "\t Digite o primeiro numero inteiro: " << std::endl << "\t";
	cin >> Numero1;
	cout << "\t Digite o segundo numero inteiro: " << std::endl << "\t";
	cin >> Numero2;
	cout << "\t Digite o terceiro numero inteiro: " << std::endl << "\t";
	cin >> Numero3;
	cout << "\t Digite o quarto numero inteiro: " << std::endl << "\t";
	cin >> Numero4;
	
	cout << "--------------------------------------" << std::endl;
	
	soma = Numero1+Numero2+Numero3+Numero4;

	multiplicacao = Numero1*Numero2*Numero3*Numero4;

	MediaS = soma/4;

	MediaM = multiplicacao/4;


	cout << std::endl;
	cout << "---------------------------" << std::endl;
	cout << " a media da soma e:\t" << MediaS << std::endl;
	cout << "---------------------------" << std::endl;
	cout << " a media da multiplicacao e:\t" << MediaM << std::endl;
	cout << "---------------------------" << std::endl;

	return 0;
} 