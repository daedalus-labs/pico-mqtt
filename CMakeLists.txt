# cmake-format: off
set(${MQTT_LIBRARY_NAME} pico-mqtt)
pico_add_library(${MQTT_LIBRARY_NAME} NOFLAG)

add_dependencies(
    ${MQTT_LIBRARY_NAME}
    pico_lwip_mqtt
    pico_stdlib
)

target_compile_options(
    ${MQTT_LIBRARY_NAME}
    PRIVATE
        -Wall -Werror -Wno-format -Wno-unused-function -Wno-maybe-uninitialized
)

target_include_directories(
    ${MQTT_LIBRARY_NAME}
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_sources(
    ${MQTT_LIBRARY_NAME}
    PRIVATE
        src/dns/resolver.cpp
        src/mqtt/detail/context.cpp
        src/mqtt/client.cpp
        src/mqtt.cpp
)
# cmake-format: on
