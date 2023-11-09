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

// 5 Registro de materias
void Estudiante::registrar_Materia(string materia) {
    materias.push_back(materia);
}
void Estudiante::mostrar_Materias() {
    cout << "Materias del estudiante:" << endl;
    for (int i = 0; i < materias.size(); ++i) {
        cout << materias[i] << endl;
    }
}

// 7 Manejo de Ausencias
RegistroAsistencia::RegistroAsistencia(const std::string& fecha, Estado estado)
        : fecha(fecha), estado(estado) {}

void RegistroAsistencia::mostrar_asistencia() const {
    std::cout << "Fecha: " << fecha << ", Estado: ";
    switch (estado) {
        case ASISTIO:
            std::cout << "Asistio";
            break;
        case FALTO:
            std::cout << "Falto";
            break;
        case TARDO:
            std::cout << "Tardo";
            break;
    }
    std::cout << std::endl;
}
