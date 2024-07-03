# Добавление всех cpp файлов из текущего каталога в библиотеку
add_library(cylinder_library cylinder.cpp cylinder.h)

# Указание пути к заголовочным файлам для этой библиотеки
target_include_directories(cylinder_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

