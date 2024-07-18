project(data-structs-C C)

set(CMAKE_C_STANDARD 11)

add_executable(data-structs-C src/main.c
src/componentes/Ponto.c)

target_link_libraries(data-structs-C PRIVATE m)
