/*------------------------------------------------------------------------------
Copyright (c) 2023 Joe Porembski
SPDX-License-Identifier: BSD-3-Clause
------------------------------------------------------------------------------*/
#pragma once

#include "mqtt/client.hpp"
#include "mqtt/common.hpp"

#include <cstdint>
#include <string>
#include <string_view>


namespace mqtt {
/**
 * Publishes @a data on @a topic using @a client.
 *
 * @param[in] client The MQTT client to use.
 * @param[in] topic The MQTT topic on which to publish @a data.
 * @param[in] data The data to be published on @a topic.
 * @param[in] retain true if @a data should be retained on @a topic, false otherwise.
 * @param[in] qos The QoS type to use for the publish.
 * @return True if the @a data was published on @a topic, false otherwise.
 */
bool publish(Client& client, const char* topic, const std::string& data, bool retain, QoS qos = QoS::EXACTLY_ONCE);

/**
 * Publishes @a data on @a topic using @a client.
 *
 * @param[in] client The MQTT client to use.
 * @param[in] topic The MQTT topic on which to publish @a data.
 * @param[in] data The data to be published on @a topic.
 * @param[in] retain true if @a data should be retained on @a topic, false otherwise.
 * @param[in] qos The QoS type to use for the publish.
 * @return True if the @a data was published on @a topic, false otherwise.
 */
bool publish(Client& client, const char* topic, uint32_t data, bool retain, QoS qos = QoS::EXACTLY_ONCE);
} // namespace mqtt
