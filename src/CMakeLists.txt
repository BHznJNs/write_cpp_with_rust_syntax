file(GLOB SOURCES "*.cpp")
add_library(rust_preclude STATIC ${SOURCES})
target_link_libraries(rust_preclude fmt::fmt)
