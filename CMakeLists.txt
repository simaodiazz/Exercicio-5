# Versão do CMake
cmake_minimum_required(VERSION 3.16)

# Nome do projeto
project(Application)

# Versão do C++
set(CMAKE_CXX_STANDARD 11)

# Definir a pasta de arquivos de cabeçalho
include_directories(./include)

# Todos os arquivos do projeto 
add_executable(Application src/main.cpp)
