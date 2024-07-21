cmake_minimum_required(VERSION 3.26)
project(NuevoTema)

set(CMAKE_CXX_STANDARD 17)
set(SFML_DIR C:/Users/zamor/.vcpkg-clion/vcpkg/scripts/buildsystems/vcpkg.cmake)
add_executable(NuevoTema
        circulo.cpp
        cuadrado.cpp
        coloresPrimarios.cpp
        bandera.cpp
        banderaConFierro.cpp
        Star.cpp
        triangulo.cpp
        DVD.cpp
        isodecagono.cpp
        Trigonometia.cpp
        poo_trigo.cpp
        poo_trigo.h
        Irregular.cpp
        Ponk.cpp
)

find_package(SFML 2.5 COMPONENTS graphics system window CONFIG REQUIRED)
target_link_libraries(NuevoTema sfml-graphics sfml-system sfml-window)