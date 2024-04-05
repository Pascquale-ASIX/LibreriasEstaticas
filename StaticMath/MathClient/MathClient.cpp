// MathClient.cpp
// compile with: cl /EHsc MathClient.cpp /link MathLibrary.lib

#include "MathLibrary.h"
#include <iostream>

using namespace std;

int main() {
    string ingrediente;
    cout << "Ingredientes disponibles: pollo, pasta, arroz\n";
    cout << "Introduce un ingrediente que tienes: ";
    cin >> ingrediente;
    cout << sugerirReceta(ingrediente) << endl;
    return 0;
}




// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
