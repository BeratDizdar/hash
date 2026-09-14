#pragma once
#include <stdint.h>

uint64_t FNV_1a(const uint8_t *data);
uint64_t FNV_1a_Mask(const uint8_t *data, uint64_t mask);