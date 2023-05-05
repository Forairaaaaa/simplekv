
set(SIMPLEKV_ROOT_DIR ${CMAKE_CURRENT_LIST_DIR})

if (ESP_PLATFORM)
    include(${CMAKE_CURRENT_LIST_DIR}/cmake/esp.cmake)
else()

    set(SIMPLEKV_SRCS
    "simplekv.cpp"
        "value_convert.cpp"
    )

    add_library(simplekv ${SIMPLEKV_SRCS})

    target_include_directories(simplekv PUBLIC
        "."
    )

endif()

