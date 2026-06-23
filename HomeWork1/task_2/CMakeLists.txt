#cmake_minimum_required(VERSION 4.3)
#project(task_2)
#
#set(CMAKE_CXX_STANDARD 14)
#
#include_directories(include)
#include_directories(include/ipb_arithmetic)
#
#add_executable(task_2
#        include/ipb_arithmetic/subtract.hpp
#        include/ipb_arithmetic/sum.hpp
#        include/ipb_arithmetic.hpp
#        src/main.cpp
#        src/subtract.cpp
#        src/sum.cpp)

#-----------------------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.10)
project(ipb_arithmetic)

set(CMAKE_CXX_STANDARD 17)

add_library(ipb_arithmetic STATIC
        src/sum.cpp
        src/subtract.cpp
)

add_executable(main src/main.cpp)

target_link_libraries(main ipb_arithmetic)

# -------------------------
# INSTALL RULES (IMPORTANT)
# -------------------------

install(TARGETS ipb_arithmetic
        ARCHIVE DESTINATION lib
)

install(TARGETS main
        RUNTIME DESTINATION bin
)

install(DIRECTORY include/
        DESTINATION include
)