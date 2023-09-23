# cmake-format: off
if (NOT TARGET pico_mqtt)
    pico_add_library(pico_mqtt NOFLAG)

    target_compile_options(
        pico_mqtt
        INTERFACE
            -Wall -Werror -Wno-format -Wno-unused-function -Wno-maybe-uninitialized
    )

    target_include_directories(
        pico_mqtt_headers
        INTERFACE
            ${CMAKE_CURRENT_SOURCE_DIR}/include
            ${CMAKE_CURRENT_SOURCE_DIR}/src
    )

    target_sources(
        pico_mqtt
        INTERFACE
            src/dns/resolver.cpp
            src/mqtt/detail/context.cpp
            src/mqtt/client.cpp
            src/mqtt.cpp
    )    
    
    target_link_libraries(
        pico_mqtt
        INTERFACE
            pico_cyw43_arch_lwip_threadsafe_background
            pico_lwip_mqtt
            pico_stdlib
    )
endif()
# cmake-format: on
