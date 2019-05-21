project(greeter)
add_library(greeter)

# C++17
target_compile_features(greeter PUBLIC cxx_std_17)
target_compile_options(greeter PUBLIC -std=c++17)
set_target_properties(greeter PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

# Tests
add_subdirectory(tests)

# Includes
target_include_directories(greeter
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Sources
target_sources(greeter
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/src/Greeter.cpp
)
