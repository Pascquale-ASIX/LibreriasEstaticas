// MathLibrary.cpp
// compile with: cl /c /EHsc MathLibrary.cpp
// post-build command: lib MathLibrary.obj

#include "MathLibrary.h"
using namespace std;

string sugerirReceta(string ingrediente) {
    if (ingrediente == "pollo") {
        return "Con " + ingrediente + " puedes hacer Pollo a la brasa. Necesitaras pollo, sal, pimienta y aceite de oliva.";
    }
    else if (ingrediente == "pasta") {
        return "Con " + ingrediente + " puedes hacer Spaghetti a la carbonara. Necesitaras pasta, huevos, queso parmesano, panceta y pimienta negra.";
    }
    else if (ingrediente == "arroz") {
        return "Con " + ingrediente + " puedes hacer Paella. Necesitaras arroz, pollo, conejo, judía verde, tomate, aceite de oliva, agua, sal, azafrán y pimentón.";
    }
    else if (ingrediente == "patatas") {
        return "Con " + ingrediente + " puedes hacer Tortilla de patatas. Necesitaras patatas, huevos, cebolla y aceite de oliva.";
    }
    else if (ingrediente == "tomate") {
        return "Con " + ingrediente + " puedes hacer Gazpacho. Necesitaras tomates, pepino, pimiento, cebolla, ajo, aceite de oliva, vinagre y sal.";
    }
    else {
        return "Lo siento, no tengo recetas con " + ingrediente;
    }
}

