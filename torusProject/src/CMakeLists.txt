# Добавление всех cpp файлов из текущего каталога в библиотеку
add_library(torus_library torus.cpp torus.h)

# Указание пути к заголовочным файлам для этой библиотеки
target_include_directories(torus_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

