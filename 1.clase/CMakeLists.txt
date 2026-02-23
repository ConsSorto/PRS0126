cmake_minimum_required(VERSION 4.1)
project(1_clase C)

set(CMAKE_C_STANDARD 11)

add_executable(1_clase main.c
        1.ejercicios/cajero.c
        1.ejercicios/generadortablas.c
        1.ejercicios/delivery.c
        EjerciciosPorTema/1_constantes.c
        EjerciciosPorTema/ambitos.c
        EjerciciosPorTema/2_recursividad.c
        EjerciciosPorTema/1_constantesPI.c
        EjerciciosPorTema/3_preprocesadorifdef.c
        EjerciciosPorTema/4_punterosyreferencia.c
        EjerciciosPorTema/4_pasoporreferencia.c
        EjerciciosPorTema/4_punteros_varios.c
        EjerciciosPorTema/2_prototipo_funcion.c
        EjerciciosPorTema/3_preprocesador_define.c)
