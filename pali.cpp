#include <iostream>
#include <string>
using namespace std;
int main() {
    string texto;
    int aux = 0, igual = 0;

    cout << "Ingrese la palabra a evaluar: ";                       // Imprimir la peticion para ingresar la palabra
    getline(cin >> ws, texto);

    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {                              // Hace que las palabras las darle un sentido opuesto sea el mismo
            igual++;
        }
        aux++;
    }

    if(texto.length() == igual) {
        cout << "La palabra ingresada es palindromo!! :D" << endl;
    } else {
        cout << "La palabra ingresada no es palindromo!! :D" << endl;
    }

    return 0;
}