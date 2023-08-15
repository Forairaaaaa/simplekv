# Basic CMakeLists.txt

set(SIMPLEKV_SRCS
    ./simplekv.cpp
)
set(SIMPLEKV_INCS
    ./
)
add_library(${PROJECT_NAME} ${SIMPLEKV_SRCS})
target_include_directories(${PROJECT_NAME} PUBLIC ${SIMPLEKV_INCS})


option(SIMPLEKV_BUILD_EXAMPLE "Build example" ON)


# Example
if(SIMPLEKV_BUILD_EXAMPLE)
    add_subdirectory(./example/)
endif()


