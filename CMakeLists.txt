cmake_minimum_required (VERSION 3.28)
project(LetterDraw)
#installed by vcpkg x64 windows
find_package(SFML 2.6.1 COMPONENTS graphics audio REQUIRED)
add_executable(LetterDraw main.cpp main.hpp ObjectsX.cpp ObjectsX.hpp)
target_link_libraries(LetterDraw sfml-graphics sfml-audio)
