cmake_minimum_required(VERSION 3.5)

project(02_02_-odd_occurrences_in_array LANGUAGES C)

add_executable(02_02_-odd_occurrences_in_array main.c)

include(GNUInstallDirs)
target_link_libraries(${PROJECT_NAME} -lunity)
install(TARGETS 02_02_-odd_occurrences_in_array
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)