#include <iostream>
#include <cmath> // para fmod si lo necesitas
using namespace std;

int main() {
    int a = 20;
    float b = 10.0f; // poner el punto para float
    int c = 30;

    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "División: " << a / b << endl;

    // Para el resto (modulo) con float usamos fmod
    cout << "Resto (modulo) con fmod: " << fmod(a, b) << endl;

    cout << "Multiplicación: " << a * b << endl;

    // Operadores de comparación y lógicos
    bool respuesta;

    respuesta = (b > a && c > b);
    cout << "b > a AND c > b: " << respuesta << endl;

    respuesta = (b < a && c < b);
    cout << "b < a AND c < b: " << respuesta << endl;

    respuesta = (b == a && c == b);
    cout << "b == a AND c == b: " << respuesta << endl;

    respuesta = !(b > a && c > b);
    cout << "NOT (b > a AND c > b): " << respuesta << endl;

    respuesta = (b < a || c > b);
    cout << "b < a OR c > b: " << respuesta << endl;

    return 0;
}
