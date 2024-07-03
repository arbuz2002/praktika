# Добавление всех cpp файлов из текущего каталога в библиотеку
add_library(ball_library ball.cpp ball.h)

# Указание пути к заголовочным файлам для этой библиотеки
target_include_directories(ball_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

