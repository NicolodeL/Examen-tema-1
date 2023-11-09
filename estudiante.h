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
    string grado;
public:
    Estudiante(string nombre, int edad, string grado);
    string getNombre();
    int getEdad();
    string getGrado();
    void mostrar_info();
};









#endif //EXAMEN_TEMA_1_ESTUDIANTE_H
