#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Usuario {
    string nombre;
    string contrasena;
    int creditos;

    Usuario(string nombre, string contrasena) : nombre(nombre), contrasena(contrasena), creditos(0) {}
};

// Funciones de submenú para Jugar
void BuscarJuego() {
    cout << "Buscando juego..." << endl;
    // Implementación de búsqueda de juegos
}

void VerCreditos(int creditos) {
    cout << "Tienes " << creditos << " créditos." << endl;
}

void VerHistorial() {
    cout << "Mostrando historial..." << endl;
    // Implementación de historial de juegos
}

void MenuJugar(Usuario &usuario) {
    int opcion;
    do {
        cout << "1. Buscar juego" << endl;
        cout << "2. Ver créditos" << endl;
        cout << "3. Ver historial" << endl;
        cout << "0. Atras" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                BuscarJuego();
                break;
            case 2:
                VerCreditos(usuario.creditos);
                break;
            case 3:
                VerHistorial();
                break;
            case 0:
                cout << "Volviendo al menú principal..." << endl;
                break;
            default:
                cout << "Opción incorrecta, por favor intente de nuevo." << endl;
                break;
        }
    } while (opcion != 0);
}

// Funciones de submenú para Opciones
void CambiarContrasena(Usuario &usuario) {
    cout << "Ingrese su nueva contraseña: ";
    string nuevaContrasena;
    cin >> nuevaContrasena;
    usuario.contrasena = nuevaContrasena;
    cout << "Contraseña cambiada con éxito." << endl;
}

void MenuOpciones(Usuario &usuario) {
    int opcion;
    do {
        cout << "1. Cambiar contraseña" << endl;
        cout << "0. Atras" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                CambiarContrasena(usuario);
                break;
            case 0:
                cout << "Volviendo al menú principal..." << endl;
                break;
            default:
                cout << "Opción incorrecta, por favor intente de nuevo." << endl;
                break;
        }
    } while (opcion != 0);
}

// Funciones de submenú para Comprar Juegos
void ComprarJuego(Usuario &usuario) {
    cout << "Comprando juego..." << endl;
    // Implementación de compra de juegos
}

void MenuComprarJuegos(Usuario &usuario) {
    int opcion;
    do {
        cout << "1. Comprar juego" << endl;
        cout << "0. Atras" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ComprarJuego(usuario);
                break;
            case 0:
                cout << "Volviendo al menú principal..." << endl;
                break;
            default:
                cout << "Opción incorrecta, por favor intente de nuevo." << endl;
                break;
        }
    } while (opcion != 0);
}

int main() {
    string nombre, contrasena;
    cout << "* * * * * * * * * * * BIENVENIDO * * * * * * * * * * *" << endl;
    cout << "* * * * * * * * A LOS JUEGOS ARCADE * * * * * * * * * *" << endl << endl;
    cout << "REGISTRE SU NOMBRE DE USUARIO: "; 
    cin >> nombre;
    cout << "REGISTRE SU CONTRASENA: "; 
    cin >> contrasena;

    Usuario usuario(nombre, contrasena);

    cout << "HOLA DE NUEVO, " << usuario.nombre << "!" << endl;

    int opcion1;
    do {
        cout << "1. JUGAR" << endl;
        cout << "2. OPCIONES" << endl;
        cout << "3. COMPRAR JUEGOS" << endl;
        cout << "0. SALIR" << endl;
        cout << "Elige una opción: "; 
        cin >> opcion1;
        if (opcion1 != 1 && opcion1 != 2 && opcion1 != 3 && opcion1 != 0) {
            cout << "Valor incorrecto, por favor intente de nuevo." << endl;
        } else {
            switch (opcion1) {     
                case 1: 
                    MenuJugar(usuario);
                    break;
                case 2:
                    MenuOpciones(usuario);
                    break;
                case 3: 
                    MenuComprarJuegos(usuario);
                    break;
                case 0:
                    int deseaSalir;
                    cout << "1. Continuar " << endl;
                    cout << "2. Salir" << endl << endl;
                    cout << "¿Seguro que quiere salir del programa? "; 
                    cin >> deseaSalir;
                    if (deseaSalir != 1 && deseaSalir != 2) {
                        cout << "Valor incorrecto, por favor intente de nuevo." << endl;
                    } else {
                        if (deseaSalir == 2) {
                            cout << "SALIENDO..." << endl;
                            return 0;
                        }
                    }
                    break;
            }
        }
    } while (opcion1 != 0);

    return 0;
}
