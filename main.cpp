#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "estudiante.h"
using namespace std;

// 1 Operaciones básicas
int suma(int a, int b) {
    return a + b;
}
// 3 Optimización de Memoria
void intercambiar(char &c, char &d){
    char temp = c;
    c = d;
    d = temp;
    }

int main() {
    // 1 Operaciones básicas
    cout << suma(6, 5) << endl;

    // 2 Gestión de estudiantes
    Estudiante estudiante1("Juan", 12, "2");
    estudiante1.mostrar_info();

    // 3 Optimización de Memoria
    char c = 'a';
    char d = 'b';
    printf("Antes del intercambio c = %c y d = %c \n" , c, d);
    intercambiar(c, d);
    cout << "Despues del intercambio: c = " << c << ", d = " << d << endl;
}

