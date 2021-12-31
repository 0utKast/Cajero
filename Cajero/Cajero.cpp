/* Este es un cajero automático que maneja operaciones como:
1. Comprobar el balance de la cuenta
2. Depositar Dinero en una cuenta.
3. Retirar Dinero de una cuenta.

Un cliente tendrá que escribir su número de cuenta y un pin para acceder a operaciones con la cuenta.
Este programa usa una cuenta "ficticia" con número de cuenta 12345 y número de Pin 54321
*/
#include <iostream>
int balanceCuenta = 0;




int menu() {

    int opcionEscritaUsuario = -1;

    std::cout << "Bienvenido a Tu Cuenta. Por favor elige una Opción para Proceder" << std::endl;
    std::cout << "    1 - Ver balance de Tu Cuenta" << std::endl;
    std::cout << "    2 - Retirar Dinero" << std::endl;
    std::cout << "    3 - Depositar Dinero" << std::endl;
    std::cout << "    4 - Salir" << std::endl;
    std::cout << "Escribe una Opción para Proceder: " << std::endl;
    std::cin >> opcionEscritaUsuario;

    return opcionEscritaUsuario;

}

void SaldoTotal() {

    std::cout << "El balance de tu cuenta es:" << std::endl;
    std::cout << " " << balanceCuenta << std::endl;

}

void Retiros() {

    int opcionEscritaUsuario = -1;
    int valorARetirar = 0;
    long PeticionCliente = 0;
    bool noHaFinalizado = true;

    do {

        std::cout << "Opciones de Retirada:" << std::endl;
        std::cout << "1 -  20" << std::endl;
        std::cout << "2 -  40" << std::endl;
        std::cout << "3 -  60" << std::endl;
        std::cout << "4 -  100" << std::endl;
        std::cout << "5 -  200" << std::endl;
        std::cout << "6 - Cancelar transacción" << std::endl;
        std::cout << "7 - Cantidad Personalizada" << std::endl;
        std::cout << "Elija una opción de retirada (1-7)" << std::endl;

        std::cin >> opcionEscritaUsuario;
        switch (opcionEscritaUsuario) {
        case 1:
            valorARetirar = 20;
            break;
        case 2:
            valorARetirar = 40;
            break;
        case 3:
            valorARetirar = 60;
            break;
        case 4:
            valorARetirar = 100;
            break;
        case 5:
            valorARetirar = 200;
            break;
        case 6:
            noHaFinalizado = false;
            break;
        case 7:
            std::cout << "Escriba Cantidad a Retirar:" << std::endl;
            std::cin >> PeticionCliente;
            valorARetirar = PeticionCliente;
            noHaFinalizado = false;
            break;
        default:
            std::cout << "Opción Inválida. Inténtelo de nuevo." << std::endl;
            break;
        }

        if (valorARetirar != 0) {
            if (valorARetirar > balanceCuenta) {
                std::cout << "Lo siento El balance de su cuenta tiene solo  " << balanceCuenta << ". Usted no puede retirar  " << valorARetirar << std::endl;
            }
            else {
                balanceCuenta = balanceCuenta - valorARetirar;
                noHaFinalizado = false;
            }
            valorARetirar = 0;
        }

    } while (noHaFinalizado);

}

void DepositarDineroEnCuenta() {

    int opcionEscritaUsuario = -1;
    bool noHaFinalizado = true;
    long cantidadDepositada = 0;

    do {

        std::cout << "Opciones Depósito Dinero. Por favor Escriba Su Selección" << std::endl;
        std::cout << "1 -  20" << std::endl;
        std::cout << "2 -  40" << std::endl;
        std::cout << "3 -  60" << std::endl;
        std::cout << "4 -  100" << std::endl;
        std::cout << "5 -  200" << std::endl;
        std::cout << "6 - cancelar transacción" << std::endl;
        std::cout << "7 - Cantidad Personalizada" << std::endl;
        std::cout << "Elija una opción de depósito (1-7)" << std::endl;

        std::cin >> opcionEscritaUsuario;
        switch (opcionEscritaUsuario) {
        case 1:
            balanceCuenta = balanceCuenta + 20;
            noHaFinalizado = false;
            break;
        case 2:
            balanceCuenta = balanceCuenta + 40;
            noHaFinalizado = false;
            break;
        case 3:
            balanceCuenta = balanceCuenta + 60;
            noHaFinalizado = false;
            break;
        case 4:
            balanceCuenta = balanceCuenta + 100;
            noHaFinalizado = false;
            break;
        case 5:
            balanceCuenta = balanceCuenta + 200;
            noHaFinalizado = false;
            break;
        case 6:
            noHaFinalizado = false;
            break;
        case 7:
            std::cout << "Please Enter Amount to Deposit:" << std::endl;
            std::cin >> cantidadDepositada;
            balanceCuenta = balanceCuenta + cantidadDepositada;
            noHaFinalizado = false;
            break;
        default:
            std::cout << "Invalid option! Try again." << std::endl;
            break;
        }

    } while (noHaFinalizado);

}

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    

        int noHaFinalizado = true;

        do {

            switch (menu()) {
            case 1:
                SaldoTotal();
                break;
            case 2:
                Retiros();
                break;
            case 3:
                DepositarDineroEnCuenta(); 
                break;
            case 4:
                noHaFinalizado = false;
                break;
            default:
                std::cout << "Opción Inválida. Pruebe de nuevo." << std::endl;
                break;
            }

        } while (noHaFinalizado);

    

    return 0;

}
