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

int main() {
    // 1 Operaciones básicas
    cout << suma(6, 5) << endl;
    // 2 Gestión de estudiantes
    Estudiante estudiante1("Juan", 12, "2");
    estudiante1.mostrar_info();

}
