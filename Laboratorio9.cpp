// Laboratorio8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

// Función recursiva para calcular el factorial
int factorial(int n) {
    // Si el número es negativo, lanzamos una excepción porque el factorial de un número negativo no está definido.
    if (n < 0) {
        throw invalid_argument("Error: Factorial de un número negativo no está definido.");
    }

    // Caso base: El factorial de 0 o 1 siempre es 1.
    if (n == 0 || n == 1) {
        return 1;
    }

    // Aquí es donde se hace la recursión. Se multiplica el número actual por el factorial de n-1.
    return n * factorial(n - 1);  // ¡Este es el núcleo de la recursión! Se va llamando a la función con valores más pequeños de n.
}

int main() {
    try {
        int numero;
        cout << "Introduce un numero para calcular el factorial: ";  // Pedimos al usuario que ingrese un número.
        cin >> numero;  // Leemos el número ingresado.

        // Calculamos el factorial utilizando la función recursiva.
        int resultado = factorial(numero);

        // Imprimimos el resultado.
        cout << "El factorial de " << numero << " es: " << resultado << endl;
    }
    // Si el número ingresado es negativo, se lanzará una excepción, la cual es capturada aquí.
    catch (const exception& e) {
        cerr << "Excepción capturada: " << e.what() << endl;  // Mostramos el mensaje de la excepción.
    }
    // Este bloque captura cualquier otro error que no haya sido anticipado.
    catch (...) {
        cerr << "Se ha producido un error desconocido." << endl;  // Mensaje genérico para cualquier otra excepción no manejada.
    }

    return 0;  // Fin del programa.
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
