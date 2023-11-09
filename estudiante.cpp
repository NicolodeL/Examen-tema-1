#include "estudiante.h"
// 2 Gestión de estudiantes
Estudiante::Estudiante(string nombre, int edad, string grado) {
    this->nombre = nombre;
    this->edad = edad;
    this->grado = grado;
}
string Estudiante::getNombre() {
    return nombre;
}
int Estudiante::getEdad() {
    return edad;
}
string Estudiante::getGrado() {
    return grado;
}
void Estudiante::mostrar_info() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Grado: " << grado << endl;
}
