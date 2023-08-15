# Basic usage
add_executable(basic_usage ./basic_usage.cpp)
target_link_libraries(basic_usage ${PROJECT_NAME})
target_include_directories(basic_usage PRIVATE ../)
