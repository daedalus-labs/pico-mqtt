/*------------------------------------------------------------------------------
Copyright (c) 2023 Joe Porembski
SPDX-License-Identifier: BSD-3-Clause
------------------------------------------------------------------------------*/
#pragma once

#include <cstdint>
#include <string_view>

namespace mqtt {
inline constexpr size_t TOPIC_BUFFER_SIZE = UINT8_MAX;
inline constexpr uint16_t KEEP_ALIVE_TIMEOUT_S = 120;
inline constexpr uint8_t OFF = 0;
inline constexpr uint8_t ON = 1;
inline constexpr uint8_t CONNECTED = ON;
inline constexpr uint8_t DISCONNECTED = OFF;
} // namespace mqtt
