cmake_minimum_required(VERSION 3.16)
project(DataStructuresTests)

set(CMAKE_CXX_STANDARD 17)
enable_testing()

# Подключаем googletest (необходимо клонировать репозиторий в папку googletest)
add_subdirectory(googletest)
include_directories(include)

# Собираем тестовый бинарник
add_executable(tests
    tests/test_queue.cpp
    tests/test_heap.cpp
    tests/test_binary_tree.cpp
)

target_link_libraries(tests gtest_main)

# Настраиваем автоматическое обнаружение тестов
include(GoogleTest)
gtest_discover_tests(tests)
