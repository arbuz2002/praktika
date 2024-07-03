# Указываем исходный каталог и каталог сборки для GoogleTest
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../../googletest ${CMAKE_CURRENT_BINARY_DIR}/googletest-build)

# Создание исполняемого файла тестов
add_executable(test_cone test_cone.cpp)

# Добавление зависимостей
target_link_libraries(test_cone gtest gtest_main cone_library)

# Добавление тестов
include(GoogleTest)
gtest_discover_tests(test_cone)

