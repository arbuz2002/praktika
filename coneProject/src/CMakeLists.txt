# Добавление всех cpp файлов из текущего каталога в библиотеку
add_library(cone_library cone.cpp cone.h)

# Указание пути к заголовочным файлам для этой библиотеки
target_include_directories(cone_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

