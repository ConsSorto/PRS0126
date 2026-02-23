cmake_minimum_required(VERSION 4.1)
project(1_clase C)

set(CMAKE_C_STANDARD 11)

add_executable(1_clase main.c
        1.ejercicios/cajero.c
        1.ejercicios/generadortablas.c
        1.ejercicios/delivery.c
        EjerciciosPorTema/constantes.c
        EjerciciosPorTema/ambitos.c
        EjerciciosPorTema/recursividad.c
        EjerciciosPorTema/constantesPI.c
        EjerciciosPorTema/preprocesador.c
        EjerciciosPorTema/punterosyreferencia.c
        EjerciciosPorTema/pasoporreferencia.c
        EjerciciosPorTema/punteros.c)
