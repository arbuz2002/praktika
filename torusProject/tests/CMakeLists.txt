# Указываем исходный каталог и каталог сборки для GoogleTest
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../../googletest ${CMAKE_CURRENT_BINARY_DIR}/googletest-build)

# Создание исполняемого файла тестов
add_executable(test_torus test_torus.cpp)

# Добавление зависимостей
target_link_libraries(test_torus gtest gtest_main torus_library)

# Добавление тестов
include(GoogleTest)
gtest_discover_tests(test_torus)

