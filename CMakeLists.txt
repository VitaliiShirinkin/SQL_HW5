cmake_minimum_required(VERSION 3.2)
project(SQL_HW5)
set(PostgreSQL_ADDITIONAL_VERSIONS "16")
set(SOURCE_FILES
        pgSQL.cpp
        pgSQL.h)

add_executable(SQL_HW5 main.cpp ${SOURCE_FILES})
add_subdirectory("C:/Users/artoi/VSProjects/PGSQL_API_Cxx/libpqxx-7.8.1" libpqxx-build)
target_link_libraries (SQL_HW5 pqxx)
target_compile_features (SQL_HW5 PRIVATE cxx_std_17)