// Copyright (c) 2020 Guy Turcotte
//
// MIT License. Look at file licenses.txt for details.

#pragma once

#include "esp_err.h"
#include "esp_log.h"
#include "esp_system.h"

#ifndef GLOBALS_HPP
#define GLOBALS_HPP

#include "driver/gpio.h"

// Function to initialize GPIO_NUM_2
inline void init_gpio_num_2() {
    gpio_reset_pin(GPIO_NUM_2);
    gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);
    gpio_set_level(GPIO_NUM_2, 0);
}

#endif // GLOBALS_HPP
