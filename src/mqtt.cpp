/*------------------------------------------------------------------------------
Copyright (c) 2023 Joe Porembski
SPDX-License-Identifier: BSD-3-Clause
------------------------------------------------------------------------------*/
#include "mqtt.hpp"

#include "constants.hpp"

#include <pico/stdio.h>

#include <cstdio>


namespace mqtt {
bool publish(Client& client, const char* topic, const std::string& data, bool retain, QoS qos)
{
    if (!client.publish(topic, static_cast<const void*>(data.c_str()), data.size(), qos, retain)) {
        printf("Failed to publish %s on %s\n", data.c_str(), topic);
        return false;
    }

    return true;
}

bool publish(Client& client, const char* topic, uint32_t data, bool retain, QoS qos)
{
    if (!client.publish(topic, static_cast<const void*>(&data), sizeof(uint32_t), qos, retain)) {
        printf("Failed to publish %u on %s\n", data, topic);
        return false;
    }

    return true;
}
} // namespace mqtt
