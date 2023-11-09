//
// Created by nicol on 09/11/2023.
//
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

#ifndef EXAMEN_TEMA_1_ESTUDIANTE_H
#define EXAMEN_TEMA_1_ESTUDIANTE_H

// 2 Gestión de estudiantes
class Estudiante {
    string nombre;
    int edad;
    int grado;
    std::vector<std::string> materias;
public:
    Estudiante(string nombre, int edad, int grado);
    string getNombre();
    int getEdad();
    int getGrado();
    void mostrar_info();
    // 5 Registro de materias
    void registrar_Materia(string materia);
    void mostrar_Materias();
};

// 7 Manejo de Ausencias
class RegistroAsistencia {
            public:
            enum Estado {
                ASISTIO,
                FALTO,
                TARDO
            };
            RegistroAsistencia(const std::string& fecha, Estado estado);
            void mostrar_asistencia() const;
            private:
            std::string fecha;
            Estado estado;
    };

class MateriaYaRegistradaException : public std::runtime_error {
public:
    MateriaYaRegistradaException() : std::runtime_error("La materia ya está registrada") {}
};
#endif //EXAMEN_TEMA_1_ESTUDIANTE_H
