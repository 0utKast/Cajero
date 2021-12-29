#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int deposito, saldoT, vrRetiro, retiro;
void Deposito() {
	int deposito;
	deposito = 0;
	std::cin >> deposito;
	std::cout << "\n valor del Deposito es de : " << deposito;
}
void SaldoTotal() {
	int saldoT, deposito, retiro;
	saldoT = 0;
	saldoT = deposito - retiro;
	std::cout << "\n El Saldo a la Fecha es de : " << saldoT;
}
void Retiros() {
	int retiro, vrRetiro;
	vrRetiro = 0;
	retiro = 0;
	std::cin >> vrRetiro;
	if (saldoT > vrRetiro)
	{
		retiro = saldoT - vrRetiro;
		std::cout << "\n El valor del Retiro es de : " << retiro;
	}
	else
		std::cout << "\n ******** Fondos Insuficientes....**********\n";
}
void menu() {
	int opciones;
	char opcionsalir;
	opcionsalir = 'n';
	do
	{
		std::cout << "\n";
		std::cout << "\t ******* BIENVENIDO AL CAJERO BCH ******\n";
		std::cout << "\n ";
		std::cout << "\n 1. Consulta de Saldo \n";
		std::cout << "\n 2. Deposito \n";
		std::cout << "\n 3. retiro \n";
		std::cout << "\n";
		std::cout << "\n Por favor digite la Opcion de Transaccion : "; std::cin >> opciones;
		std::cout << "\n";
		switch (opciones) {
			case
			1:
			{
				std::cout << "\n "; SaldoTotal();
				break; }
			case
			2:
			{
				std::cout << "Por favor digite el Valor a Depositar : "; Deposito();
				break; }
			case
			3:
			{
				std::cout << "Por favor digite el Valor a Retirar : "; Retiros();
				break; }
			default:
			{
				std::cout << "\n Error opcion no existe \n";
				break; }
		}
		std::cout << "\n**********************************************************\n";
		std::cout << "\n Desea realizar otra Transaccion?? s/n : "; std::cin >> opcionsalir;
	} while (opcionsalir != 'n');
}
int main()
{
	menu();
	fflush(stdin);
	system("PAUSE");
	return 0;
}